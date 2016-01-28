#include <iostream>
#include <string>

using std::string;

int main() {
    string s("ab2c3d7R4E6");
    std::cout << format_name_str(s, "Mr", "III") << std::endl;

    return 0;
}