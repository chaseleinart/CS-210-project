//
// Created by chaseleinart on 4/20/25.
//

#include <iostream>
#include <string>
#include "GroceryTracker.h"

void displayMenu() {
    std::cout << "\n===== Corner Grocer Item Tracker =====\n"
              << "1. Search for an item's frequency\n"
              << "2. Print all item frequencies\n"
              << "3. Print item histogram\n"
              << "4. Exit\n"
              << "======================================\n"
              << "Enter your choice: ";
}

int main() {
    GroceryTracker tracker("CS210_Project_Three_Input_File.txt");
    int choice = 0;
    std::string searchItem;

    // Ensure valid user input by propmpting until a valid choice is made
    while (true) {
        displayMenu();
        std::cin >> choice;
        while (std::cin.fail() || choice < 1 || choice > 4) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Invalid input. Please enter a number between 1 and 4: ";
            std::cin >> choice;
        }

        switch (choice) {
            case 1:
                std::cout << "Enter the item to search for: ";
            std::cin >> searchItem;
            std::cout << searchItem << " was purchased "
                      << tracker.findItemFrequency(searchItem)
                      << " time(s).\n";
            break;
            case 2:
                tracker.printAllItems();
            break;
            case 3:
              tracker.printHistogram();
            break;
            case 4:
                std::cout << "Exiting program.\n";
            return 0;
        }
    }
    return 0;
}
