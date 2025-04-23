//
// Created by chaseleinart on 4/20/25.
//

#include "GroceryTracker.h"
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cstdlib>

GroceryTracker::GroceryTracker(const std::string& inputFilename) {
    loadItems(inputFilename);
    saveBackup("frequency.dat");
}

// Load items and count their frequency
void GroceryTracker::loadItems(const std::string& filename) {
    std::ifstream inputFile(filename);
    if (!inputFile) {
        std::cerr << "Error: Unable to open input file." << std::endl;
        std::exit(1);
    }
    std::string item;
    while (inputFile >> item) {
        itemFrequency[item]++;
    }
}

// Save backup data to a file
void GroceryTracker::saveBackup(const std::string& backupFilename) const {
    std::ofstream backupFile(backupFilename);
    if (!backupFile) {
        std::cerr << "Error: Unable to create backup file." << std::endl;
        std::exit(1);
    }
    for (const auto& pair : itemFrequency) {
        backupFile << pair.first << " " << pair.second << std::endl;
    }
}

// Find frequency of a specific item
int GroceryTracker::findItemFrequency(const std::string& item) const {
    auto it = itemFrequency.find(item);
    return (it != itemFrequency.end() ? it->second : 0);
}

// Print all items with their frequencies
void GroceryTracker::printAllItems() const {
    std::cout << std::left << std::setw(15) << "Item" << "Frequency" << std::endl;
    std::cout << "--------------------------" << std::endl;
    for (const auto& pair : itemFrequency) {
        std::cout << std::left << std::setw(15) << pair.first << pair.second << std::endl;
    }
}

// Print histogram of item frequencies
// Create histogram for each item by printing asterisks representing frequency of each item
void GroceryTracker::printHistogram() const {
    for (const auto& pair : itemFrequency) {
        std::cout << std::left << std::setw(15) << pair.first;
        for (int i = 0; i < pair.second; ++i) std::cout << "*";
        std::cout << std::endl;
    }
}
