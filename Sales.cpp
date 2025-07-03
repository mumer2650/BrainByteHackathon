#include "Sales.h"
#include "Order.h"

Sales::Sales() {
	grandTotal = 0;
}

void Sales::addOrder(Order& order) 
{
	orders.push_back(order);
	grandTotal += order.getTotalPrice();
}

std::vector<Order> Sales::getOrders()
{
	return orders;
}

float Sales::getGrandTotal()
{
	return grandTotal;
}

void Sales::calculateTotal()
{
	grandTotal = 0;
	for (Order& order : orders)
	{
		grandTotal += order.getTotalPrice();
	}
}