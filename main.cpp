#include <iostream>
#include "main.h"
#include <cmath>
#include <cstdlib>
#include <vector>
#include <functional>

main(){
  clearConsole();
  mainMenu();
  

  return 0;
}

void clearConsole(){

  //Clear command from system function library to clear the console when called.
  system("clear");
}


void mainMenu(){

  //Created a vetor where each element has a pair, one string as an option, and one function pointer.
  std::vector<std::pair<std::string, std::function<void()>>> menuOptions = {
    
    {"Body Mass Index", bodyMassIndex},
    {"Basal Metabolic Rate", basalMetabolicRate},
    {"Calorie Requirements", calorieRequirements}

  };

  //Displaying the Menu Options
  clearConsole();
  std::cout << "Menu:" << std::endl;
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