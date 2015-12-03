#include <iostream>
#include "Sales_data.h"
using std::cin;
using std::cout;
using std::endl;
using std::cerr;

int main() {
    Sales_data total;
    double price = 0.0;
    
    if (cin >> total.bookNo >> total.unit_sold >> price) {
        total.revenue = total.unit_sold * price;
        
        Sales_data trans;
        while (cin >> trans.bookNo >> trans.unit_sold >> price) {
            trans.revenue = trans.unit_sold * price;
            if (trans.bookNo == total.bookNo) {
                total.unit_sold += trans.unit_sold;
                total.revenue += trans.revenue;
            } else {
                cout << total.bookNo << " " << total.unit_sold << " " << total.revenue << " ";
                if (total.unit_sold > 0) {
                    cout << total.revenue / total.unit_sold << endl;
                } else {
                    cout << "(No sales)" << endl;
                }
                total = trans;
            }
        }
        cout << total.bookNo << " " << total.unit_sold << " " << total.revenue << " ";
        if (total.unit_sold > 0) {
            cout << total.revenue / total.unit_sold << endl;
        } else {
            cout << "(No sales)" << endl;
        }
        return 0;
    } else {
        cerr << "No data?!" << endl;
        return -1;
    }
    
}