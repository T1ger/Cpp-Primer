#ifndef EX7_21_H
#define EX7_21_H

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
    Sales_data() = default;
    Sales_data(const std::string &s) : bookNo(s) { }
    Sales_data(const std::string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p*n) { }
    Sales_data(std::istream &is) {
        read(is, *this);
    }
    
    Sales_data& combine(const Sales_data &other);
    std::string const& isbn() const { return bookNo; }
private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    
    double avg_price() const { return revenue / units_sold; };
    
};

// nonmemeber function
Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

std::istream& read(std::istream &is, Sales_data &item) {
    double price = 0.0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = item.units_sold * price;
    return is;
}

std::ostream& print(std::ostream &os, const Sales_data &item) {
    os << item.bookNo << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
    return os;
}

// member function
Sales_data& Sales_data::combine(const Sales_data &other) {
    units_sold += other.units_sold;
    revenue += other.revenue;
    return *this;
}

#endif