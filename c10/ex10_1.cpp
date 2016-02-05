#include <iostream>
#include <algorithm>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::count;

int main() {
    vector<int> ivec(9, 10);
    
    cout << count(ivec.cbegin(), ivec.cend(), 10) << endl;

    return 0;
}