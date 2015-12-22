#include <iostream>

using namespace std;

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    Sales_data& combine(const Sales_data &other);
    std::string isbn() const { return bookNo; }
};

Sales_data& Sales_data::combine(const Sales_data &other) {
    units_sold += other.units_sold;
    revenue += other.revenue;
    return *this;
}

int main() {
    Sales_data total;
    if (cin >> total.bookNo >> total.units_sold >> total.revenue) {
        Sales_data trans;
        while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
                total = trans;
            }
        }
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
    } else {
        cerr << "No data?!" << endl;
    }

    return 0;
}