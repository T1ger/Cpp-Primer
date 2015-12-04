#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main() {

    vector<int> iv;
    
    for (int i = 0; i != 10; i++) {
        iv.push_back(i);
    }
    
    for (auto it = iv.begin(); it != iv.end(); it++) {
        *it = *it * 2;
    }
    
    for (auto new_i : iv) cout << new_i << " ";
    cout << endl;

    return 0;
}