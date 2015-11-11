#include <iostream>

void print_range(int low, int high)
{
    if (low > high) 
    {
        print_range(high, low);
    } else {
       for (int i = low; i != high; ++i)
        {
            std::cout << i << " ";
        } 
    }
    
}

int main() 
{
    int v1 = 0, v2 = 0;
    std::cout << "Please input two numbers: " << std::endl;
    std::cin >> v1 >> v2;
    print_range(v1, v2);
    
    return 0;
}