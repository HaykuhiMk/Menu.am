#include "menu.h"

void Menu::add_food(Food* f)
{
	food.push_back(f);
}

std::vector<Food*> Menu::get_food() const
{
	return food;
}
