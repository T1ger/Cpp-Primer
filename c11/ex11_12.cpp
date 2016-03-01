#include <iostream>
#include <utility>
#include <vector>
#include <string>

int main() {
    std::vector<std::pair<std::string, int>> vec;
    std::string s;
    int i;
    while (std::cin >> s >> i) {
        vec.push_back(std::make_pair(s, i));
//        vec.push_back(std::pair<std::string, int>(s, i));
//        vec.push_back({s, i});
    }
    for (const auto &v : vec) std::cout << v.first << " " << v.second << std::endl;

    return 0;
}