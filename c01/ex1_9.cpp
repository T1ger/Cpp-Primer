#include <iostream>

int sum(int from, int to)
{
    int sum = 0;
    while (from != to + 1) 
    {
        sum += from++;
    }
    return sum;
}

int main() 
{
    int from = 50, to = 100;
    std::cout << "The sum from 50 to 100 is: ";
    std::cout << sum(from, to);
    std::cout << std::endl;
    
    return 0;
}