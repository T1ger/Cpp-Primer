#include <iostream>
#include <string>

using std::string;

string& format_name_str(string& s, const string& prefix, const string& suffix) {
    s.insert(s.begin(), prefix.cbegin(), prefix.cend());
    s.append(suffix);
    
    return s;
}

int main() {
    string s("Jon Snow");
    std::cout << format_name_str(s, "Mr", "III") << std::endl;

    return 0;
}