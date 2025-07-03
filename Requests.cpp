#include "Requests.h"
#include <fstream>
#include <iostream>


Request::Request() {
    itemName = "";
    price = 0.0;
    category = "";
    quantity = 0;
}

Request::Request(std::string itemName, double price, std::string category, int quantity) {
    this->itemName = itemName;
    this->price = price;
    this->category = category;
    this->quantity = quantity;
}
void Request::setItemName(std::string name) {
    itemName = name;
}

void Request::setPrice(double price) {
    this->price = price;
}

void Request::setCategory(std::string category) {
    this->category = category;
}

void Request::setQuantity(int quantity) {
    this->quantity = quantity;
}

std::string Request::getItemName() const {
    return itemName;
}

double Request::getPrice() const {
    return price;
}

std::string Request::getCategory() const {
    return category;
}

int Request::getQuantity() const {
    return quantity;
}

