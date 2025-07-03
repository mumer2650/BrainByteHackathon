#pragma once
#include <string>

class RecipeDL {
public:
    static bool saveRecipe(const std::string& itemName, const std::string& ingredients, const std::string& steps);
    static bool removeRequest(const std::string& itemName);
    static bool addRecipeForRequestedItem(const std::string& itemName, const std::string& ingredients, const std::string& steps);
};

