#include "fastfood.h"

Fastfood::Fastfood(const std::string& n, int p) 
	: Food(n, p)
{} 

void Fastfood::setName(const std::string& n)
{
	name_ = n;
}

std::string Fastfood::getName() const 
{
	return name_;
}

void Fastfood::setPrice(int p)
{
	price_ = p;
}

int Fastfood::getPrice() const
{
	return price_;
}