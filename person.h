#ifndef PERSON_H
#define PERSON_H

#include <vector>
#include <string>
#include "account.h"

class Person {
public:
	Person(const std::string&, int, const std::string&, Account*);
	~Person();
	std::string get_name() const;
	void set_name(const std::string&);
    int get_age() const;
    void set_age(int);
    std::string get_passport() const;
	void set_passport(const std::string&);
	Account* get_person() const;
    void set_person(Account*);

private:
	std::string name_;
	int age_;
    std::string passport_;
	Account* acc_;
};

#endif // PERSON_H