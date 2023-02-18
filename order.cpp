#include "order.h"

Order::Order(Restaurant* r, Account* a, std::vector<Food*> vf)
    : res(r)
    , acc(a)
    , ordered_food(vf)
{}

Order::~Order()
{
    delete res;
    delete acc;
    ordered_food.clear();
}

void do_order()
{
    std::vector<Food*> food = res->menu->get_food();
    double money = 0;
    for (int i = 0; i < ordered_food.size(); ++i) 
    {
        money += food.find(ordered_food[i])->getPrice();
    }
    acc->pay(money);
}
