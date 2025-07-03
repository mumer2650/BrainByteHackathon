#include "RequestDL.h"
#include <fstream>
#include <iostream>

bool::RequestDL::requestNewItem(const std::string& name, double price, const std::string& category, int quantity) {
    std::ofstream file("requests.txt", std::ios::app);

    if (file.is_open()) {
        file << "#" << name << "," << price << "," << category << "," << quantity << std::endl;
        file.close();
        return true;
    }
    else {
        return false;
    }
}
