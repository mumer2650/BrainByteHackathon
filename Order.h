#pragma once
#include<string>

class Order {
private:
	std::string itemName;
	float price;
	int quantity;
	float totalPrice;


public:
	Order(std::string itemName, float price, int quantity);

	std::string getItemName();
	float getPrice();
	int getQuantity();
	float getTotalPrice();
};
