#include "RecipeDL.h"
#include <fstream>
#include <sstream>
#include <vector>
#include <iostream>

bool RecipeDL::saveRecipe(const std::string& itemName, const std::string& ingredients, const std::string& steps) {
    std::ofstream recipeFile("recipes.txt", std::ios::app);
    if (!recipeFile.is_open()) {
        return false;
    }

    recipeFile << "#" << itemName << std::endl;
    recipeFile << "Ingredients: " << ingredients << std::endl;
    recipeFile << "Steps: " << steps << std::endl;
    recipeFile.close();
    return true;
}

bool RecipeDL::removeRequest(const std::string& itemName) {
    std::ifstream inFile("requests.txt");
    if (!inFile.is_open()) {
        return false;
    }

    std::vector<std::string> lines;
    std::string line;
    while (getline(inFile, line)) {
        if (line.find(itemName) == std::string::npos) {
            lines.push_back(line);
        }
    }
    inFile.close();

    std::ofstream outFile("../requests.txt");
    if (!outFile.is_open()) {
        return false;
    }

    for (const auto& l : lines) {
        outFile << l << std::endl;
    }
    outFile.close();
    return true;
}

bool RecipeDL::addRecipeForRequestedItem(const std::string& itemName, const std::string& ingredients, const std::string& steps) {
    bool recipeSaved = saveRecipe(itemName, ingredients, steps);
    if (!recipeSaved) {
        std::cout << "Error: Unable to save recipe.\n";
        return false;
    }

    bool requestRemoved = removeRequest(itemName);
    if (!requestRemoved) {
        std::cout << "Error: Unable to remove item from requests.\n";
        return false;
    }

    std::cout << "Recipe for '" << itemName << "' added successfully and request removed.\n";
    return true;
}