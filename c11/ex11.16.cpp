#include <iostream>
#include <map>
#include <string>

using namespace std;
int main() {
    
    map<string, int> m;
    m["test"] = 9;
    
    map<string, int>::iterator it = m.begin();
    cout << it->first << " : " << it->second << endl;
    it->second = 18;
    cout << it->first << " : " << it->second << endl;

    return 0;
}