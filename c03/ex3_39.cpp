#include <iostream>
#include <string>
#include <cstring>

using std::cout;
using std::endl;
using std::string;

int main() {
    string s1 = "A string example";
    string s2 = "A different string";
    
    if (s1 > s2) {
        cout << "s1 is larger than s2" << endl;
    } else if (s1 < s2) {
        cout << "s1 is less than s2" << endl;
    } else {
        cout << "s1 and s2 are equal" << endl;
    }
    
    const char ca1[] = "A string example";
    const char ca2[] = "A different string";
    auto r = strcmp(ca1, ca2);
    
    if (r > 0) {
        cout << "ca1 is larger than ca2" << endl;
    } else if (r < 0) {
        cout << "ca1 is less than ca2" << endl;
    } else {
        cout << "ca1 and ca2 are equal" << endl;
    }
    
    return 0;
}