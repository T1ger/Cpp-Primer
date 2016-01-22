#include <iostream>
#include <string>
#include <list>

int main() {
    std::list<std::string> ls;
    /*
    std::string word;
    while (std::cin >> word) {
        ls.push_back(word);
    }
    */
    for (std::string word; std::cin >> word; ls.push_back(word));
    for (auto it = ls.cbegin(); it != ls.cend(); ++it) {
        std::cout << *it << std::endl;
    }

    return 0;
}