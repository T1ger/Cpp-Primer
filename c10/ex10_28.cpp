#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>

using namespace std;

int main() {
    vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int> ilist;
    forward_list<int> iflist;
    deque<int> ideq;
    
    copy(ivec.cbegin(), ivec.cend(), inserter(ilist, ilist.begin()));
    
    copy(ivec.cbegin(), ivec.cend(), back_inserter(ideq));
    
    copy(ivec.cbegin(), ivec.cend(), front_inserter(iflist));
        
    for (auto i : ilist) {
        cout << i << " ";
    }
    cout << endl;
    
    for (auto i : ideq) {
        cout << i << " ";
    }
    cout << endl;
    
    for (auto i : iflist) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}