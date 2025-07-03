#include "SalesDL.h"
#include <fstream>

void SalesDL::saveSaleToFile(Sales& sale)
{
	std::ofstream out("sales.txt", std::ios::app);
	out << "-------- New Sale -------\n";

	for (Order& order : sale.getOrders())
	{
		out << order.getItemName() << " x " << order.getQuantity() 
			<< " @ " << order.getPrice()
			<< " = " << order.getTotalPrice() << "\n";
	}
}
