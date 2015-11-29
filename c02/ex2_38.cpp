#include <iostream>

using namespace std;
int main() {
    int a = 1;
    const int b = 2;
    
    auto c = a;
    
    decltype(a) d = a;
    
    auto e = b;
    
    decltype(b) f = b;
    
    e = 3;
    //f = 3;
    
    int &g = a;
    
    auto h = 4;
    
    //decltype(g) i = 5;
    decltype(g) i = a;
    
    return 0;
}