#include <iostream>

using namespace std;
int main() {
    int a = 7;
    cout << "a is " << a << endl;
    
    const int b = a;
    cout << "b is " << b << endl;
    
    auto c = b;
    c = 14;
    cout << "c is " << c << endl;
    
    auto d = &b;
    // *d = 21;
    cout << "d is " << *d << endl;
    
    auto &e = b;
    // e = 21;
    cout << "e is " << e << endl;

    const auto &f = 21;
    cout << "f is " << f << endl;
    
    return 0;
}