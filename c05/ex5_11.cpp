#include <iostream>

using namespace std;
int main() {
    int spaceCnt = 0, tabCnt = 0, newlineCnt = 0;
    char c;
    
    while (cin >> noskipws >> c) {
        switch (c) {
            case ' ':
                ++spaceCnt;
                break;
            case '\t':
                ++tabCnt;
                break;
            case '\n':
                ++newlineCnt;
                break;
        }
    }
    cout << "blank space: " << spaceCnt << endl;
    cout << "tab: " << tabCnt << endl;
    cout << "new line: " << newlineCnt << endl;

    return 0;
}