#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;
int main() {
    vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    list<int> ilis;
    copy(ivec.crend()-7, ivec.crend()-2, back_inserter(ilis));
    
    for (auto i : ilis) cout << i << " ";
    cout << endl;

    return 0;
}