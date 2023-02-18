#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
public:
    Account(int, double = 0);
    ~Account() = default;
    int get_id() const;
    void set_id(int);
    double get_money() const;
    void pay(double money);

private:
    int id_;
    double money_;
};

#endif //ACCOUNT_H