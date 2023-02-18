#ifndef ORDER_H
#define ORDER_H
#include "account.h"
#include "restaurant.h"

class Order
{
public:
    Order(Restaurant*, Account*, std::vector<Food*>);
    ~Order();
    void do_order();

private:
    Restaurant* res;
    Account* acc;
    std::vector<Food*> ordered_food;
};
#endif  //ORDER_H