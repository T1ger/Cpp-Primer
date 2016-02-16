#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <list>

using namespace std;

int main() {
    vector<string> svec{"Hello", "Hello", "World", "World", "Beauty"};
    list<string> slist;
    
    unique_copy(svec.cbegin(), svec.cend(), inserter(slist, slist.begin()));
    
    for (auto &s : slist) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}