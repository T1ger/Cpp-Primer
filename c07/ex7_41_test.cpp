#include "ex7_41.h"

int main() {
    Sales_data data1;
    std::cout << "------" << std::endl;
    Sales_data data2("11-222-333333");
    std::cout << "------" << std::endl;
    Sales_data data3("11-222-333333", 1, 2);
    std::cout << "------" << std::endl;
    Sales_data data4(std::cin);
    return 0;
}