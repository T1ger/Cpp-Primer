#ifndef EX7_57_H
#define EX7_57_H

#include <string>

class Account {
public:
    void calculate() { amount += amount * interestRate; }
    static double rate() { return interestRate; }
    static void setRate(double newRate) { interestRate = newRate; }
private:
    std::string owner;
    double amount;
    static double interestRate;
    static constexpr double todayRate = 6.5;
    static double initRate() { return todayRate; }
};

double Account::interestRate = initRate();

#endif