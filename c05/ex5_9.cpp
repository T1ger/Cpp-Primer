#include <iostream>

using namespace std;
int main() {
    int acount = 0, ocount = 0, ecount = 0, icount = 0, ucount = 0;
    int vcount = 0;
    char c;

    /*
    while (cin >> c) {
        if (c == 'a') ++acount;
        else if (c == 'o') ++ocount;
        else if (c == 'e') ++ecount;
        else if (c == 'i') ++icount;
        else if (c == 'u') ++ucount;
    }
    cout << acount + ocount + ecount + icount + ucount << endl;
    */
    while (cin >> c) {
        if (c == 'a' || c == 'o' || c == 'e' || c == 'i' || c == 'u') {
            ++vcount;
        }
    }
    cout << vcount << endl;
    
    return 0;
}