#include <iostream>
#include "food.h"

// <> = already exist
// "" = user defined header

int main(int argc, char* argv[])
{
	std::cout << "Today I'll eat " << RecommendMeAFood('c') << '\n';
	getPizzaRecipe();

	return 0;
}