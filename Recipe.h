#pragma once
#include <string>
#include <vector>
class Recipe {
private:
    int item_id;
    std::vector<std::string> ingredients;
    std::vector<std::string> steps;

public:
    Recipe();
    Recipe(int item_id, std::vector<std::string> ingredients, std::vector<std::string> steps);

    void setItemID(int id);
    void setIngredients(std::vector<std::string> ing);
    void setSteps(std::vector<std::string> steps);

    int getItemId() const;
    std::vector<std::string> getIngredients() const;
    std::vector<std::string> getSteps() const;
};
