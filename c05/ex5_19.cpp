#include <iostream>
#include <string>

using namespace std;
int main() {
    bool onoff = false;
    string s1;
    string s2;
    do {
        if (!onoff) {
            cin >> s1;
            onoff = true;
        } else {
            cin >> s2;
            onoff = false;
        }
    } while (onoff);h
    
    if (s1 > s2) {
        cout << "s1 is larger than s2" << endl;
    } else if (s1 < s2) {
        cout << "s1 is less than s2" << endl;
    } else {
        cout << "s1 and s2 are equal" << endl;
    }

    return 0;
}