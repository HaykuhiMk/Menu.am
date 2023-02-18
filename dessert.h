#ifndef DESSERT_H
#define DESSERT_H
#include "food.h"

class Dessert : public Food
{
public:
	Dessert(const std::string&, int);
	void setName(const std::string&) override;
	std::string getName() const override;
	void setPrice(int) override;
	int getPrice() const override;
};

#endif	//DESSERT_H