#include "Menu.h"

Menu:: Menu(): id(0), name(""), price(0.0), category(""), quantity(0) {}


int Menu::getId() const {
    return id;
}

std::string Menu::getName() const {
    return name;
}

double Menu::getPrice() const {
    return price;
}

std::string Menu::getCategory() const {
    return category;
}

int Menu::getQuantity() const {
    return quantity;
}

// Setters

void Menu::setName(const std::string& n) {
    name = n;
}

void Menu::setPrice(double p) {
    price = p;
}

void Menu::setCategory(const std::string& c) {
    category = c;
}

void Menu::setQuantity(int q) {
    quantity = q;
}

