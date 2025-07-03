#pragma once
#include <string>
#include <vector>

class Menu {
private:
    int id;
    std::string name;
    double price;
    std::string category;
    int quantity;

public:
    // Default Constructor
    Menu(); // Declare here

    // Parameterized Constructor
    Menu(int id, const std::string& name, double price, const std::string& category, int quantity)
        : id(id), name(name), price(price), category(category), quantity(quantity) {
    }

    // Getters
    int getId() const { return id; }
    std::string getName() const { return name; }
    double getPrice() const { return price; }
    std::string getCategory() const { return category; }
    int getQuantity() const { return quantity; }

    // Setters
    void setName(const std::string& n) { name = n; }
    void setPrice(double p) { price = p; }
    void setCategory(const std::string& c) { category = c; }
    void setQuantity(int q) { quantity = q; }
};
