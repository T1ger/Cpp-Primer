#include <iostream>
#include "Sales_data.h"

int main() {
    Sales_data total;
    double price = 0.0;
    
    if (std::cin >> total.bookNo >> total.unit_sold >> price) {
        total.revenue = total.unit_sold * price;
        
        Sales_data trans;
        while (std::cin >> trans.bookNo >> trans.unit_sold >> price) {
            trans.revenue = trans.unit_sold * price;
            if (trans.bookNo == total.bookNo) {
                total.unit_sold += trans.unit_sold;
                total.revenue += trans.revenue;
            } else {
                std::cout << total.bookNo << " " << total.unit_sold << " " << total.revenue << " ";
                if (total.unit_sold > 0) {
                    std::cout << total.revenue / total.unit_sold << std::endl;
                } else {
                    std::cout << "(No sales)" << std::endl;
                }
                total = trans;
            }
        }
        std::cout << total.bookNo << " " << total.unit_sold << " " << total.revenue << " ";
        if (total.unit_sold > 0) {
            std::cout << total.revenue / total.unit_sold << std::endl;
        } else {
            std::cout << "(No sales)" << std::endl;
        }
        return 0;
    } else {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    
}
