#include <iostream>

int main() 
{
    int v = 10;
    while (v >= 0) {
        std::cout << v-- << std::endl;
    }
    
    return 0;
}