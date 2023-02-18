#include "person.h"

Person::Person(const std::string& name, int age, const std::string& passport, Account* acc) 
    : name_(name)
    , age_(age)
    , passport_(passport)
    , acc_(acc)
{}

Person::~Person() 
{
    delete acc_;
}

std::string Person::get_name() const 
{
    return name_;
}

void Person::set_name(const std::string& name) 
{
    name_ = name;
}

int Person::get_age() const 
{
    return age_;
}

void Person::set_age(int age) 
{
    age_ = age;
}

std::string Person::get_passport() const 
{
    return passport_;
}

void Person::set_passport(const std::string& passport) 
{
    passport_ = passport;
}

Account* Person::get_person() const 
{
    return acc_;
}

void Person::set_person(Account * acc) 
{
    acc_ = acc;
}
