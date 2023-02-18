#include "account.h"

Account::Account(int id, double money) 
    : id_(id)
    , money_(money)
{}

int Account::get_id() const 
{
    return id_;
}

void Account::set_id(int id) 
{
    id_ = id;
}

double Account::get_money() const 
{
    return money_;
}

void Account::pay(double money) 
{
    if (money_ <= money) 
    {
        money_ -= money;
    }
    else 
    {
        throw std::out_of_range("Insufficient money!");
    }
}


