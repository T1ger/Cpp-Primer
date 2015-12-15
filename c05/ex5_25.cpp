#include <iostream>

using namespace std;
int main() {
    int a, b;
    while (cout << "Input two integer:" << endl, cin >> a >> b) {
        try {
            if (b == 0) throw runtime_error("The second number cannot be zero!");
            else break;
        } catch (runtime_error err) {
            cout << err.what() << endl;
        }
    } 
    
    cout << a / b << endl;

    return 0;
}