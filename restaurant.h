#ifndef RESTAURANT_H
#define RESTAURANT_H
#include <string>
#include "menu.h"

class Restaurant
{
public:
    Restaurant(const std::string&, const std::string&, const std::string&, Menu*);
    ~Restaurant() = default;
    void set_name_(const std::string&);
    std::string get_name_() const;
    void set_address_(const std::string&);
    std::string get_address_() const;
    void set_phone_(const std::string&);
    std::string get_phone_() const;
    void print();

private:
    std::string name_;
    std::string address_;
    std::string phone_;
    Menu* menu_;
};

#endif  //RESTAURANT_H