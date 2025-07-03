#include "MenuDL.h"
#include <fstream>
#include <sstream>
#include <vector>
#include <iostream>

bool MenuDL::increaseItemStock(int itemId, int quantityToAdd) {
    std::ifstream inFile("../menu.txt");
    std::vector<std::string> lines;
    bool itemFound = false;

    if (!inFile.is_open()) {
        return false;
    }

    std::string line;
    while (getline(inFile, line)) {
        if (line[0] == '#') line = line.substr(1);

        std::stringstream ss(line);
        std::string idStr, name, price, category, quantityStr;
        getline(ss, idStr, ',');
        getline(ss, name, ',');
        getline(ss, price, ',');
        getline(ss, category, ',');
        getline(ss, quantityStr, ',');

        int id = stoi(idStr);
        if (id == itemId) {
            int quantity = stoi(quantityStr);
            quantity += quantityToAdd;
            line = "#" + idStr + "," + name + "," + price + "," + category + "," + std::to_string(quantity);
            itemFound = true;
        }
        else {
            line = "#" + idStr + "," + name + "," + price + "," + category + "," + quantityStr;
        }

        lines.push_back(line);
    }
    inFile.close();

    if (!itemFound) {
        return false;
    }
    std::ofstream outFile("../menu.txt");
    if (!outFile.is_open()) {
        return false;
    }

    for (const auto& updatedLine : lines) {
        outFile << updatedLine << std::endl;
    }
    outFile.close();
    return true;
}

bool MenuDL::addRequestedItemInMenu(int id, const std::string& name, double price, const std::string& category, int quantity)
{
    std::ofstream menuFile("../menu.txt", std::ios::app);
    if (!menuFile.is_open()) {
        return false;
    }

    menuFile << "#" << id << std::endl;
    menuFile << "," << name << std::endl;
    menuFile << "," << price<< std::endl;
    menuFile << "," << category << std::endl;
    menuFile << "," << quantity << std::endl;
    menuFile.close();
}   