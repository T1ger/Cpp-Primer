#include <iostream>
#include <string>
#include <deque>

int main() {
    std::string word;
    std::deque<std::string> ds;
    while (std::cin >> word) {
        ds.push_back(word);
    }
    for (auto it = ds.cbegin(); it != ds.cend(); ++it) {
        std::cout << *it << std::endl;
    }

    return 0;
}