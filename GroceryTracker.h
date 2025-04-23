//
// Created by chaseleinart on 4/20/25.
//

#ifndef GROCERYTRACKER_H
#define GROCERYTRACKER_H

#include <map>
#include <string>

class GroceryTracker {
private:
    std::map<std::string, int> itemFrequency;
    void loadItems(const std::string& filename);

public:
    GroceryTracker(const std::string& inputFilename);
    void saveBackup(const std::string& backupFilename) const;
    int findItemFrequency(const std::string& item) const;
    void printAllItems() const;
    void printHistogram() const;
};

#endif

