#ifndef RECIPE_H
#define RECIPE_H

#include <string>
#include <vector>

class Recipe {
private:
    std::string itemName;
    std::vector<std::string> ingredients;
    std::vector<std::string> steps;

public:
    Recipe();
    Recipe(std::string itemName, std::vector<std::string> ingredients, std::vector<std::string> steps);

    void setItemName(std::string name);
    void setIngredients(std::vector<std::string> ing);
    void setSteps(std::vector<std::string> steps);

    std::string getItemName() const;
    std::vector<std::string> getIngredients() const;
    std::vector<std::string> getSteps() const;
};

#endif
