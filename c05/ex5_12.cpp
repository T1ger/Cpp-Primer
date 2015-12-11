#include <iostream>

using namespace std;
int main() {
    int ffCnt = 0, flCnt = 0, fiCnt = 0;
    char c, prev_c;
    
    while (cin >> c) {
        switch (c) {
            case 'f':
                if (prev_c == 'f') ++ffCnt;
                break;
            case 'i':
                if (prev_c == 'f') ++fiCnt;
                break;
            case 'l':
                if (prev_c == 'f') ++flCnt;
                break;
        }
        prev_c = c;
    }
    cout << "ffCnt: " << ffCnt << endl;
    cout << "flCnt: " << flCnt << endl;
    cout << "fiCnt: " << fiCnt << endl;

    return 0;
}