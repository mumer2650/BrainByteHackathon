#pragma once
#include <string>
#include<vector>
#include "Menu.h"

class MenuDL {
public:
    static bool increaseItemStock(int itemId, int quantityToAdd);
    static bool addRequestedItemInMenu(int id, const std::string& name, double price, const std::string& category, int quantity);

    static std::vector<Menu> loadMenuFromFile();
};