#include "Recipe.h"

Recipe::Recipe() {
    itemName = "";
    ingredients = {};
    steps = {};
}

Recipe::Recipe(std::string itemName, std::vector<std::string> ingredients, std::vector<std::string> steps) {
    this->itemName = itemName;
    this->ingredients = ingredients;
    this->steps = steps;
}

void Recipe::setItemName(std::string name) {
    itemName = name;
}

void Recipe::setIngredients(std::vector<std::string> ing) {
    ingredients = ing;
}

void Recipe::setSteps(std::vector<std::string> steps) {
    this->steps = steps;
}

// Getters
std::string Recipe::getItemName() const {
    return itemName;
}

std::vector<std::string> Recipe::getIngredients() const {
    return ingredients;
}

std::vector<std::string> Recipe::getSteps() const {
    return steps;
}
