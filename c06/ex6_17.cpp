#include <iostream>
#include <string>

using namespace std;

bool containsCapital(const string& s) {
    for (auto c : s) {
        if (c == toupper(c)) return true;
    }
    return false;
}

void lowerString(string& s) {
    for (auto &c : s) {
        c = tolower(c);
    }
}

int main() {
    string s = "Hello World";
    if (containsCapital(s)) {
        cout << "Contains capital letter" << endl;
    } else {
        cout << "Does not contains capital letter" << endl;
    }
    
    lowerString(s);
    cout << s << endl;

    return 0;
}