#include <iostream>
#include <string>

using std::string;

string& replace_str(string& s, const string& oldVal, const string& newVal) {
    for (auto iter = s.begin(); iter != s.end() - oldVal.size(); ++iter) {
        if (oldVal == string(iter, iter+oldVal.size())) {
            s.erase(iter-s.begin(), oldVal.size());
            s.insert(iter-s.begin(), newVal);
        }
    }
    
    return s;
}

int main() {
    string s("Hello tho by world thru there");
    std::cout << replace_str(s, "tho", "though") << std::endl;

    return 0;
}