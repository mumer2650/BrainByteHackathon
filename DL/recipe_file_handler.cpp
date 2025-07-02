#include "recipe_file_handler.h"
#include <fstream>
#include <iostream>

bool RecipeFileHandler::addRecipeToFile(const Recipe& recipe) {
    std::ofstream file("../Files/recipes.txt", std::ios::app); // Adjust path based on your setup

    if (file.is_open()) {
        file << "#" << recipe.getItemName() << "\n";

        file << "Ingredients:\n";
        for (const auto& ing : recipe.getIngredients()) {
            file << "- " << ing << "\n";
        }

        file << "Steps:\n";
        for (const auto& step : recipe.getSteps()) {
            file << "* " << step << "\n";
        }

        file << "===\n"; 
        file.close();
        return true;
    } else {
        return false;
    }
}
