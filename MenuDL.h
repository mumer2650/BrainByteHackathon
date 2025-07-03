#pragma once
#include <string>

class MenuDL {
public:
    static bool increaseItemStock(int itemId, int quantityToAdd);
    static bool addRequestedItemInMenu(int id, const std::string& name, double price, const std::string& category, int quantity);
};