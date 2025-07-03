#include <iostream>
#include "RequestDL.h"
#include "MenuDL.h"
#include "RecipeDL.h"

int main()
{
	std::cout << "\n--- Manager requesting new item ---\n";
	if (RecipeDL::addRecipeForRequestedItem("Club Sandwich", "Bread, Chicken, Mayo, Lettuce", "Toast bread, grill chicken, assemble with mayo and lettuce"))
	{
		std::cout << "Added";
	}
}