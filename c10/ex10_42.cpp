#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

void printVec(list<int> &ivec) {
    for (auto i : ivec) cout << i << " ";
    cout << endl;
}

void elimDups(list<int> &ivec) {
    printVec(ivec);
    
    ivec.sort();
    printVec(ivec);

    ivec.unique();
    printVec(ivec);

}

int main() {
    list<int> ivec{10, 9, 8, 9, 7, 6, 10, 5, 9, 4, 5, 3, 9, 2, 4, 1, 2, 0}; 
    
    elimDups(ivec);

    return 0;
}