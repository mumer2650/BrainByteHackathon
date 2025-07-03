//#include <iostream>
//#include <vector>
//#include <fstream>
//#include <string>
//#include <sstream>
//
//#include "Menu.h"
//#include "MenuDL.h"
//
//struct OrderItem {
//    Menu item;
//    int quantity;
//};
//
//int main() {
//    std::vector<Menu> menu = MenuDL::loadMenuFromFile();
//
//    if (menu.empty()) {
//        std::cout << "⚠️  Menu could not be loaded or is empty.\n";
//        return 0;
//    }
//
//    std::cout << "ID\tName\t\tPrice\t\tCategory\tQuantity\n";
//    for (const Menu& item : menu) {
//        std::cout << item.getId() << "\t" << item.getName() << "\t\t"
//            << item.getPrice() << "\t\t" << item.getCategory() << "\t\t"
//            << item.getQuantity() << "\n";
//    }
//
//    std::vector<OrderItem> order;
//
//    while (true) {
//        int id, qty;
//        std::cout << "\nEnter Item ID to order (0 to finish): ";
//        std::cin >> id;
//
//        if (id == 0) break;
//
//        std::cout << "Enter quantity: ";
//        std::cin >> qty;
//
//        bool found = false;
//
//        for (Menu& item : menu) {
//            if (item.getId() == id) {
//                found = true;
//                if (item.getQuantity() >= qty) {
//                    order.push_back({ item, qty });
//                    item.setQuantity(item.getQuantity() - qty);
//                    std::cout << "✅ Added to order.\n";
//                }
//                else {
//                    std::cout << "❌ Not enough stock!\n";
//                }
//                break;
//            }
//        }
//
//        if (!found) {
//            std::cout << "❌ Item ID not found.\n";
//        }
//    }
//
//    if (order.empty()) {
//        std::cout << "\n⚠️  No items were ordered.\n";
//        return 0;
//    }
//
//    std::cout << "\n🧾 Invoice:\n";
//    double total = 0;
//    for (const OrderItem& o : order) {
//        double lineTotal = o.item.getPrice() * o.quantity;
//        std::cout << o.item.getName() << " x" << o.quantity << " = " << lineTotal << "\n";
//        total += lineTotal;
//    }
//    std::cout << "Total: " << total << "\n";
//
//    return 0;
//}
