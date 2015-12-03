#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    string str1, str2;

    cout << "Please input a string: " << endl;
    getline(cin, str1);
    for (auto c : str1) {
        if (!ispunct(c)) {
            str2 += c;
        }
    }
    cout << "The new string is: " << str2 << endl;

    return 0;
}