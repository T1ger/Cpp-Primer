#ifndef EX7_41_H
#define EX7_41_H

#include <string>
#include <iostream>

class Sales_data;
std::istream& read(std::istream &is, Sales_data &item);

class Sales_data {
    // friend declarations
    friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
    friend std::istream& read(std::istream &is, Sales_data &item);
    friend std::ostream& print(std::ostream &os, const Sales_data &item);
public:
    // constructor
    Sales_data(const std::string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p*n) { std::cout << "Constructor: Sales_data(const std::string &s, unsigned n, double p) got called." << std::endl; }
    
    Sales_data() : Sales_data("", 0, 0)  { std::cout << "Constructor: Sales_data() got called." << std::endl; }
    explicit Sales_data(const std::string &s) : Sales_data(s, 0, 0) { std::cout << "Constructor: Sales_data(const std::string &s) got called." << std::endl; }
    explicit Sales_data(std::istream &);
    
    Sales_data& combine(const Sales_data &other);
    std::string const& isbn() const { return bookNo; }
private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

    inline double avg_price() const;
    
};

inline double Sales_data::avg_price() const {
    { return units_sold ? revenue / units_sold : 0; }
}

// declarations
Sales_data add(const Sales_data &, const Sales_data &);
std::istream& read(std::istream &, Sales_data &);
std::ostream& print(std::ostream &, const Sales_data &);
#endif