#include <iostream>
#include <string>

using std::string;

string& replace_str(string& s, const string& oldVal, const string& newVal) {
    for (string::size_type i = 0; i != s.size()-oldVal.size(); ++i) {
        if (oldVal == string(s, i, oldVal.size())) {
            s.replace(i, oldVal.size(), newVal);
        }
    }
    
    return s;
}

int main() {
    string s("Hello tho by world thru there");
    std::cout << replace_str(s, "tho", "though") << std::endl;

    return 0;
}