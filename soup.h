#ifndef SOUP_H
#define SOUP_H
#include "food.h"

class Soup : public Food
{
public:
	Soup(const std::string&, int);  
	void setName(const std::string&) override;
	std::string getName() const override;
	void setPrice(int) override;
	int getPrice() const override;
};

#endif	//SOUP_H