#pragma once
#include <vector>
#include "Order.h"

class Sales {
private:
	std::vector<Order> orders;
	float grandTotal;

public:
	Sales();

	void addOrder(Order& order);

	std::vector<Order> getOrders();
	float getGrandTotal();

	void calculateTotal();
};
