#include <iostream>

using namespace std;
int main() {
    int aCnt = 0, oCnt = 0, eCnt = 0, iCnt = 0, uCnt = 0;
    int nonvCnt = 0;
    char c;
    
    while (cin >> c) {
        switch (c) {
            case 'a':
            case 'A':
                ++aCnt;
                break;
            case 'o':
            case 'O':
                ++oCnt;
                break;
            case 'e':
            case 'E':
                ++eCnt;
                break;
            case 'i':
            case 'I':
                ++iCnt;
                break;
            case 'u':
            case 'U':
                ++uCnt;
                break;
        	default:
                ++nonvCnt;
        }
    }
    cout << "a or A: " << aCnt << endl;
    cout << "o or O: " << oCnt << endl;
    cout << "e or E: " << eCnt << endl;
    cout << "i or I: " << iCnt << endl;
    cout << "u or U: " << uCnt << endl;
    cout << "Non Vowel: " << nonvCnt << endl;

    return 0;
}