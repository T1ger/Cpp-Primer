#include <iostream>
#include <vector>

using namespace std;
int main() {
    vector<int> ivec{1, 2, 3, 4, 5, 6, 7};
    
    for (auto ibeg = ivec.begin(); ibeg != ivec.end(); ++ibeg)
        *ibeg = ((*ibeg) & 1) ? (*ibeg) * 2 : *ibeg;
    
    for (auto i : ivec)
        cout << i << " ";
    
    cout << endl;
    
    return 0;

}