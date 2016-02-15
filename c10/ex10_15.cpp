#include <iostream>

using namespace std;
int main() {
    
    int x = 5;
    
    auto add = [x](int y) {return x+y;};
    
    cout << add(6) << endl;

    return 0;
}