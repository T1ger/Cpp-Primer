#include <iostream>

using namespace std;

void print(const int i) {
    cout << i << endl;
}

void print(const int* p) {
    cout << *p << endl;
}

int main() {
    int i = 0, j[2] = {0, 1};
    
    print(i);
    
    print(j);
    
    print(j+1);
    
    print(j+2); // error!

    return 0;
}