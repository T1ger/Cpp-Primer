#include <iostream>
#include <sstream>
#include <string>
std::istream& read(std::istream &is) {
    std::string s;
    while (is >> s) {
        std::cout << s << std::endl;
        std::cout << is.rdstate() << std::endl;
    }
    std::cout << is.rdstate() << std::endl;
    is.clear();
    return is;
}

int main() {
    std::istringstream iss("Hello World");
    read(iss);

    return 0;
}