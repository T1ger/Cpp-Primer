#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    string word1, word2;
    cout << "Please input the first word:" << endl;
    cin >> word1;
    cout << "Please input the second word:" << endl;
    cin >> word2;

    if (word1 == word2) {
        cout << "Two words are equal" << endl;
    } else if (word1 > word2) {
        cout << "The first word '" + word1 + "' are larger!" << endl;
    } else {
        cout << "The second word '" + word2 + "' are larger!" << endl;
    }

    return 0;
}