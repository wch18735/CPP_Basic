#include "food.h"
#include <iostream>

const char* RecommendMeAFood(char firstLetter) {
	if (firstLetter == 'a' || firstLetter == 'A') return "apple";
	else if (firstLetter == 'b' || firstLetter == 'B') return "banana";
	else if (firstLetter == 'c' || firstLetter == 'C') return "chocolate";
	else return "pizza";
}

void getPizzaRecipe()
{
	std::cout << "To make pizza, you need ...\n";
}