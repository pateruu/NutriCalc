#ifndef MAIN_H
#define MAIN_H

#include <vector>
#include <functional>

void clearConsole();
void mainMenu(const std::vector<std::pair<std::string, std::function<void()>>>& menuOptions);
void bodyMassIndex();
void basalMetabolicRate();
void calorieRequirements();



#endif  // MAIN_H