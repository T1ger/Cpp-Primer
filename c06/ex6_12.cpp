#include <iostream>

using namespace std;

void swap_ints(int &x, int &y) {
    int z = x;
    x = y;
    y = z;
}

int main() {
    int a = 5, b = 10;
    
    cout << "Before swap: " << a << " " << b << endl;
    
    swap_ints(a, b);
    
    cout << "After swap: " << a << " " << b << endl;

    return 0;
}