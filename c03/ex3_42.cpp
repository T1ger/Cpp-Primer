#include <iostream>
#include <vector>
#include <cstring>

using std::cout;
using std::endl;
using std::vector;

int main() {
    
    vector<int> ivec{0, 1, 2, 3, 4};
    auto sz = ivec.size();
    int ia[sz];
    int i = 0; 
    
    for (auto it = ivec.begin(); it != ivec.end(); it++) {
        ia[i++] = *it;
    }
    
    cout << ia[4] <<endl;
    
    return 0;
}