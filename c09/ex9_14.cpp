#include <iostream>
#include <list>
#include <string>
#include <vector>

int main() {
    std::list<const char *> lc{"Hello", "World", "T1gerr"}; // why add const?
    std::vector<std::string> vs;
    vs.assign(lc.cbegin(), lc.cend());
    
    for (auto const &s : vs) std::cout << s << std::endl;

    return 0;
}