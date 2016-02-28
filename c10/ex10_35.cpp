#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main() {
    vector<string> svec{"Hello", "World", "Everyone"};
    
    for (auto rs = svec.cend() - 1; rs != svec.cbegin() - 1; --rs) {
        cout << *rs << " ";
    }
    cout << endl;

    return 0;
}