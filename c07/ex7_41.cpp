#include "ex7_41.h"

Sales_data::Sales_data(std::istream &is) : Sales_data() {
    std::cout << "Constructor: Sales_data(std::istream &is) got called." << std::endl;
    read(is, *this);
}

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