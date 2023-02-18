#include <iostream>
#include "restaurant.h"

Restaurant::Restaurant(const std::string& name, const std::string& address, const std::string& phone, Menu* menu)
    : name_(name)
    , address_(address)
    , phone_(phone)
    , menu_(menu)
{}

void Restaurant::set_name_(const std::string& name)
{
    this->name_ = name;
}

std::string Restaurant::get_name_() const
{
    return name_;
}

void Restaurant::set_address_(const std::string& address)
{
    this->address_ = address;
}

std::string Restaurant::get_address_() const
{
    return address_;
}

void Restaurant::set_phone_(const std::string& phone)
{
    this->phone_ = phone;
}

std::string Restaurant::get_phone_() const
{
    return phone_;
}

void Restaurant::print()
{
    std::cout << name_ << " " << address_ << " " << phone_ << std::endl;
}

double Restaurant::get_money() const 
{
    return money_;
}