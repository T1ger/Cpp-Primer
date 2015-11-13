#include <iostream>

int main() {
    int sum = 0, value = 0; 
    for (; std::cin >> value; ) {
        sum += value;
    }
    printf("sum is %d", sum);
}