#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main() {
    string s("ab2c3d7R4E6");
    string number("0123456789");
    string alphabetic("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
    
    string::size_type pos = 0;
    while ((pos = s.find_first_of(number, pos)) != string::npos) {
        cout << "found number at index: " << pos << " element is " << s[pos] << endl;
        ++pos;
    }
    pos = 0;
    while ((pos = s.find_first_of(alphabetic, pos)) != string::npos) {
        cout << "found char at index: " << pos << " element is " << s[pos] << endl;
        ++pos;
    }
    
    pos = 0;
    while ((pos = s.find_first_not_of(alphabetic, pos)) != string::npos) {
        cout << "found number at index: " << pos << " element is " << s[pos] << endl;
        ++pos;
    }
    pos = 0;
    while ((pos = s.find_first_not_of(number, pos)) != string::npos) {
        cout << "found char at index: " << pos << " element is " << s[pos] << endl;
        ++pos;
    }

    return 0;
}