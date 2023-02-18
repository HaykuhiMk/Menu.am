#ifndef MENU_H
#define MENU_H
#include "food.h"
#include "drinks.h"

class Menu
{
public:
	Menu() = default;
	void add_food(Food*);
	std::vector<Food*> get_food() const;

private:
	std::vector<Food*> food;
};

#endif	//MENU_H