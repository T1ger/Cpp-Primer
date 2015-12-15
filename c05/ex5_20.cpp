#include <iostream>
#include <string>

using namespace std;
int main() {
    string word;
    string prev_word = "";
    string d_word = "";
    
    while (cin >> word) {
        if (word == prev_word) {
            d_word = word;
            break;
        } else {
            prev_word = word;
        }
    }
    
    if (!d_word.empty()) {
        cout << d_word << endl;
    } else {
        cout << "no word was repeated." << endl;
    }

    return 0;
}