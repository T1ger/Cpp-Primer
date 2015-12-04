#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main() {

    vector<string> text;
    for (string line; getline(cin, line); text.push_back(line));
    /* range loop
    for (auto& word : text) {
        for (auto& ch : word) {
            if (isalpha(ch)) {
                ch = toupper(ch);
            }
        }
        cout << word << " ";
    }
    */
    for (auto itv = text.begin(); itv != text.end(); itv++) {
        for (auto itc = (*itv).begin(); itc != (*itv).end(); itc++) {
            if (isalpha(*itc)) {
                *itc = toupper(*itc);
            }
        }
        cout << *itv << " ";
    }
    return 0;
}