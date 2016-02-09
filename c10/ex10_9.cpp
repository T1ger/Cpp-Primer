#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

void printVec(vector<int> &ivec) {
    for (auto i : ivec) cout << i << " ";
    cout << endl;
}

void elimDups(vector<int> &ivec) {
    printVec(ivec);
    
    sort(ivec.begin(), ivec.end());
    printVec(ivec);

    auto end_unique = unique(ivec.begin(), ivec.end());
    printVec(ivec);

    ivec.erase(end_unique, ivec.end());
    printVec(ivec);
}

int main() {
    vector<int> ivec{10, 9, 8, 9, 7, 6, 10, 5, 9, 4, 5, 3, 9, 2, 4, 1, 2, 0}; 
    
    elimDups(ivec);

    return 0;
}