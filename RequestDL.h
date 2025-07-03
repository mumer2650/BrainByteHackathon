#pragma once
#include <string>

class RequestDL
{
public:
	static bool requestNewItem(const std::string& name, double price, const std::string& category, int quantity);
};

