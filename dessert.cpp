#include "dessert.h"

Dessert::Fastfood(const std::string& n, int p) 
	: Food(n, p)
{}  

void Dessert::setName(const std::string& n)
{
	name_ = n;
}

std::string Dessert::getName() const 
{
	return name_;
}

void Dessert::setPrice(int p)
{
	price_ = p;
}

int Dessert::getPrice() const
{
	return price_;
}