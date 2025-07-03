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
    int getId() const;
    std::string getName() const ;
    double getPrice() const;
    std::string getCategory() const;
    int getQuantity() const;

    // Setters
    void setName(const std::string& n);
    void setPrice(double p);
    void setCategory(const std::string& c);
    void setQuantity(int q);
};
