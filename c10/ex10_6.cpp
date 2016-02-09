#include <iostream>
#include <vector>
#include <algorithm>
using std::vector;
using std::cout;
using std::endl;
using std::fill_n;

int main() {
    
    vector<int> ivec{1,2,3,4,5,6,7};
    fill_n(ivec.begin(), 5, 6);
    
    for (auto i : ivec) cout << i << endl;

    return 0;
}