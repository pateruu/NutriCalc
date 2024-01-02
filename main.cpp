#include <iostream>
#include "main.h"
#include <cmath>
#include <cstdlib>
#include <vector>
#include <functional>

main(){

  //Created a vetor where each element has a pair, one string as an option, and one function pointer.
  std::vector<std::pair<std::string, std::function<void()>>> menuOptions = {
    
    {"Body Mass Index", bodyMassIndex},
    {"Basal Metabolic Rate", basalMetabolicRate},
    {"Calorie Requirements", calorieRequirements}

  };

  while(true){

    //Variable to store user input.
    int choice;

    //Asking user for input.
    mainMenu(menuOptions);
    std::cout << "Enter the option that you want to select:" << std::endl;
    std::cin >> choice;

    //If user enters 0, exit program.
    if(choice == 0){
      
      clearConsole();
      break;

      //If user choice is within the options, then call the function.
    } else if((choice >= 1) && (choice <= menuOptions.size())){

      clearConsole();
      menuOptions[choice - 1].second();
      std::cout << "\n\n";

      //Otherwise tell user that the choice is invalid.
    } else{
      
      clearConsole();
      std::cout << "INVALID CHOICE\n" << std::endl;

    }
  }
  return 0;
}

//Function to clear the console.
void clearConsole(){

  //Clear command from system function library to clear the console when called.
  system("clear");
}

//Function to intialize the menu options and display the menu.
void mainMenu(const std::vector<std::pair<std::string, std::function<void()>>>& menuOptions){

  //Displaying the Menu Options
  std::cout << "Menu:" << std::endl;
  std::cout << "0. Quit" << std::endl;
  for(int i = 0; i < menuOptions.size(); i++){

    std::cout << i + 1 << ". " << menuOptions[i].first << std::endl;
  }

}

void bodyMassIndex(){

  std::cout << "bodyMassIndex";

}

void basalMetabolicRate(){

  std::cout << "basalMetabolicRate";

}

void calorieRequirements(){

  std::cout << "calorieRequirements";

}