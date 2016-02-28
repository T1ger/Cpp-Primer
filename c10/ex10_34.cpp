#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main() {
    vector<string> svec{"Hello", "World", "Everyone"};
    
    for (auto rs = svec.crbegin(); rs != svec.crend(); ++rs) {
        cout << *rs << " ";
    }
    cout << endl;

    return 0;
}