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
      std::cout << "\n";

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

  double feet;
  double inches;
  double lbs;
  double cm;
  double kg;
  int choice;
  double BMI;


  while(true){
    
    std::cout << "Body Mass Index (BMI) Menu:" << std::endl;
    std::cout << "0. Exit" << std::endl;
    std::cout << "1. Imperial System" << std::endl;
    std::cout << "2. Metric System" << std::endl;
    std::cout << "___________________________\n\n";
    std::cout << "Which system of measurement would you like to use?" << std::endl;
    std::cin >> choice;

    if(choice == 0){
      
      clearConsole();
      break;

    } else if(choice == 1){
      
      clearConsole();

      //Ask user for details.
      std::cout << "Height:" << std::endl;

      std::cout << "Please enter feet:" << std::endl;
      std::cin >> feet;

      std::cout << "Please enter inches:" << std::endl;
      std::cin >> inches;
      clearConsole();

      std::cout << "Weight:" << std::endl;
      std::cout << "Please enter pounds:" << std::endl;
      std::cin >> lbs;
      clearConsole();
      
      //Calculations
      BMI = 703 * ( lbs / (((feet*12) + inches) * ((feet*12) + inches)));

      //output statements
      std::cout << "You BMI is: " << BMI << std::endl;
      
      if(BMI < 18.5){

        std::cout << "You are considered: Underweight (<18.5)" << std::endl;
        std::cout << "_____________________________________________\n\n" << std::endl;

      } else if((BMI >= 18.5) && (BMI <= 24.9)){

        std::cout << "You are considered: Normal Weight (18.5–24.9)" << std::endl;
        std::cout << "_____________________________________________\n\n" << std::endl;

      } else if((BMI >= 25) && (BMI <= 29.9)){

        std::cout << "You are considered: Overweight (25–29.9)" << std::endl;
        std::cout << "_____________________________________________\n\n" << std::endl;

      } else{

        std::cout << "You are considered: Obese (>30)" << std::endl;
        std::cout << "_____________________________________________\n\n" << std::endl;
      }


    } else if (choice == 2){
      
      clearConsole();

      //Ask user for details.
      std::cout << "Height:" << std::endl;
      std::cout << "Please enter centimeters:" << std::endl;
      std::cin >> cm;
      clearConsole();

      std::cout << "Weight:" << std::endl;
      std::cout << "Please enter kilograms:" << std::endl;
      std::cin >> kg;
      clearConsole();
      
      //Calculations
      BMI = kg/((cm / 100) * (cm / 100));

      //output statements
      std::cout << "You BMI is: " << BMI << std::endl;
      
      if(BMI < 18.5){

        std::cout << "You are considered: Underweight (<18.5)" << std::endl;
        std::cout << "_____________________________________________\n\n" << std::endl;

      } else if((BMI >= 18.5) && (BMI <= 24.9)){

        std::cout << "You are considered: Normal Weight (18.5-24.9)" << std::endl;
        std::cout << "_____________________________________________\n\n" << std::endl;

      } else if((BMI >= 25) && (BMI <= 29.9)){

        std::cout << "You are considered: Overweight (25-29.9)" << std::endl;
        std::cout << "_____________________________________________\n\n" << std::endl;

      } else{

        std::cout << "You are considered: Obese (>30)" << std::endl;
        std::cout << "_____________________________________________\n\n" << std::endl;
      }

    } else{
      
      clearConsole();
      std::cout << "INVALID CHOICE" << std::endl;
      std::cout << "______________\n\n" << std::endl;
    }
  }
}

void basalMetabolicRate(){

  std::cout << "basalMetabolicRate";

}

void calorieRequirements(){

  std::cout << "calorieRequirements";

}