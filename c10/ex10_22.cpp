#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <functional>

using namespace std;
using std::placeholders::_1;

bool lessThan(const string& s, int l) {
    return s.size() <= l;
}

int main() {
    
    vector<string> svec{"Hello", "World", "It", "Is", "Beautiful", "Right"};
    
    cout << count_if(svec.begin(), svec.end(), bind(lessThan, _1, 6)) << endl;
    

    return 0;
}