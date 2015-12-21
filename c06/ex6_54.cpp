#include <iostream>
#include <vector>
using namespace std;

int func(int a, int b) {
    cout << "func is called" << endl;
}

int main() {
    
    using pFunc1 = decltype(func) *;    
    vector<pFunc1> v1;

    typedef decltype(func) *pFunc2;
    vector<pFunc2> v2;
    
    using pFunc3 = int(int, int);
    vector<pFunc3*> v3;
    
    using pFunc4 = int(*)(int, int);
    vector<pFunc4> v4;
    
    typedef int (*pFunc5)(int, int);    
    vector<pFunc5> v5;
    
    using pFunc6 = decltype(func);
    vector<pFunc6*> v6;
    
    return 0;
}