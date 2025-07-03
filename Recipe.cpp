#include "Recipe.h"


Recipe::Recipe() {
    item_id = 0;
    ingredients = {};
    steps = {};
}

Recipe::Recipe(int item_id, std::vector<std::string> ingredients, std::vector<std::string> steps) {
    this->item_id = item_id;
    this->ingredients = ingredients;
    this->steps = steps;
}

void Recipe::setItemID(int id) {
    item_id = id;
}

void Recipe::setIngredients(std::vector<std::string> ing) {
    ingredients = ing;
}

void Recipe::setSteps(std::vector<std::string> steps) {
    this->steps = steps;
}

int Recipe::getItemId() const {
    return item_id;
}

std::vector<std::string> Recipe::getIngredients() const {
    return ingredients;
}

std::vector<std::string> Recipe::getSteps() const {
    return steps;
}
