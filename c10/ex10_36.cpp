#include <iostream>
#include <list>
#include <algorithm>

using namespace std;
int main() {
    list<int> il{1, 2, 3, 0, 5, 2, 0, 1};
    
    auto x = find(il.crbegin(), il.crend(), 0);
    
    cout << distance(x, il.crend()) << endl;

    return 0;
}