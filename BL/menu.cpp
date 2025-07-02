#include "Menu.h"
#include <iostream>
#include <fstream>
#include <sstream>

Menu::Menu() {
    
}
bool Menu::restockItem(int item_id, int quantity_to_add) {

    for (int i = 0; i < items.size(); ++i) {
        if (items[i].id == item_id) {
            items[i].quantity += quantity_to_add;
            return true;
        }
    }
    return false;   
}
