#include <iostream>

using namespace std;

void swap_ints(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int a = 1;
    int b = 2;
    swap_ints(&a, &b);
    
    cout << a << " " << b << endl;

    return 0;
}