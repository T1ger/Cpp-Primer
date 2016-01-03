#include "ex7_11.h"

int main() {
    Sales_data data1;
    print(std::cout, data1) << std::endl;
    
    Sales_data data2("0-1234-56-Y");
    print(std::cout, data2) << std::endl;
    
    Sales_data data3("0-1234-56-Y", 7, 8.90);
    print(std::cout, data3) << std::endl;
    
    Sales_data data4(std::cin);
    print(std::cout, data4) << std::endl;

    return 0;
}