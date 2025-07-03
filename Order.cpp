#include "Order.h"

Order::Order(std::string itemName, float price, int quantity)
{
	this->itemName = itemName;
	this->price = price;
	this->quantity = quantity;
	this->totalPrice = price * quantity;
}

std::string Order::getItemName()
{
	return itemName;
}

float Order::getPrice()
{
	return price;
}

int Order::getQuantity()
{
	return quantity;
}

float Order::getTotalPrice()
{
	return totalPrice;
}


