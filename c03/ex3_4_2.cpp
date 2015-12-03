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

    if (word1.size() == word2.size()) {
        cout << "Two words have same length" << endl;
    } else if (word1.size() > word2.size()) {
        cout << "The first word '" + word1 + "' are longer!" << endl;
    } else {
        cout << "The second word '" + word2 + "' are longer!" << endl;
    }

    return 0;
}