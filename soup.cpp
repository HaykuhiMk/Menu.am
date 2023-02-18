#include "soup.h"

Soup::Fastfood(const std::string& n, int p) 
	: Food(n, p)
{}  

void Soup::setName(const std::string& n)
{
	name_ = n;
}

std::string Soup::getName() const 
{
	return name_;
}

void Soup::setPrice(int p)
{
	price_ = p;
}

int Soup::getPrice() const
{
	return price_;
}