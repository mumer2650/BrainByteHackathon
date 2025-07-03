#include <iostream>
#include <vector>
#include "MenuDL.h"
#include "Menu.h"
#include "Order.h"
#include "Sales.h"

int main() {
    //std::vector<Menu> menu = MenuDL::loadMenuFromFile();

    //std::cout << "ID\tName\t\tPrice\t\tCategory\tQuantity\n";
    //for (const Menu& item : menu) {
    //    std::cout << item.getId() << "\t" << item.getName() << "\t\t"
    //        << item.getPrice() << "\t\t" << item.getCategory() << "\t\t"
    //        << item.getQuantity() << "\n";
    //}

    //return 0;
        Order o1("Burger", 300, 2); // 600
        Order o2("Fries", 150, 1);  // 150

        Sales s;
        s.addOrder(o1);
        s.addOrder(o2);

        std::cout << "Total: " << s.getGrandTotal(); // 750
}
