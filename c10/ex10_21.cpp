#include <iostream>

using namespace std;
int main() {
    int i = 5;
    auto auto_decrement = [&i](){return --i ? false : true;};
    
    while (!auto_decrement()) {
        cout << i << " ";
    }
    cout << i << endl; 

    return 0;
}