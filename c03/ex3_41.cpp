#include <iostream>
#include <vector>
#include <cstring>

using std::cout;
using std::endl;
using std::vector;

int main() {
    const int ia[] = {0, 1, 2, 3, 4, 5};
    
    vector<int> ivec(ia+1, ia+4);    
    
    for (auto i : ivec) 
        cout << i << " ";
    
    cout << endl;
    
    return 0;
}