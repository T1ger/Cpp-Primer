#include <iostream>
#include <vector>

using namespace std;
int main() {
    vector<int> ivec;
    cout << "ivec: size: " << ivec.size() << endl;
    cout << "capacity: " << ivec.capacity() << endl;
    
    for (vector<int>::size_type ix = 0; ix != 24; ++ix) ivec.push_back(ix);
    
    ivec.reserve(40);
    for (vector<int>::size_type ix = 0; ix != 24; ++ix) ivec.push_back(ix);
    ivec.shrink_to_fit();
    cout << "ivec: size: " << ivec.size() << endl;
    cout << "capacity: " << ivec.capacity() << endl;

    return 0;
}