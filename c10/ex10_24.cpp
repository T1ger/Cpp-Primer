#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <functional>

using namespace std;
using std::placeholders::_1;

bool check_size(const string& s, int i) {
    return s.size() < i;
}

int main() {
    
    vector<int> ivec{0, 1, 2, 3, 4, 5, 6};
    
    auto result = find_if(ivec.begin(), ivec.end(), bind(check_size, "01234567", _1));
    if (result != ivec.end()) {
        cout << *result << endl;
    } else {
        cout << "Not found" << endl;
    }

    return 0;
}