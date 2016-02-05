#include <iostream>
#include <algorithm>
#include <list>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::count;
using std::list;

int main() {
    list<string> slist(9, "Hello");
    
    cout << count(slist.cbegin(), slist.cend(), "Hello") << endl;

    return 0;
}