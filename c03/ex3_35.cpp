#include <iostream>

using namespace std;

int main() {
    
    constexpr int sz = 10;
    
    int ia[sz];

    for (int i = 0; i != sz; ++i) {
        *(ia + i) = 0;
    }    
    
    for (auto i : ia) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}