#ifndef FASTFOOD_H
#define FASTFOOD_H
#include "food.h"

class Fastfood : Food
{
public:
	Fastfood(const std::string&, int);  
	void setName(const std::string&) override;
	std::string getName() const override;
	void setPrice(int) override;
	int getPrice() const override;
};

#endif	//FASTFOOD_H