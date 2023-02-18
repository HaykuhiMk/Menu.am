#ifndef FOOD_H
#define FOOD_H

class Food
{
public:
	Food(const std::string& n, int p) : name_{n}, price_{p} {}  
	virtual void setName(const std::string&) = 0;
	virtual std::string getName() const = 0;
	virtual void setPrice(int) = 0;
	virtual int getPrice() const = 0;
	
private:
	std::string name_;
	int price_;
};

#endif	//FOOD_H