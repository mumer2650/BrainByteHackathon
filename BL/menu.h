#ifndef MENU_H
#define MENU_H

#include <string>
#include <vector>

struct MenuItem {
    int id; 
    std::string name;
    double price;
    std::string category;
    int quantity;
};

class Menu {
private:
    std::vector<MenuItem> items;

public:
    Menu();

    bool restockItem(int item_id, int quantity_to_add);
};

#endif
