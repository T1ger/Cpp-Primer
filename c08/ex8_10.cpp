#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

int main() {
    std::ifstream ifs("README.md");
    std::string line;
    std::vector<std::string> s_vec;
    while (std::getline(ifs, line)) {
        s_vec.push_back(line);
    }
    
    for (auto &s : s_vec) {
        std::istringstream iss(s);
        std::string word;
        while (iss >> word) {
            std::cout << word << std::endl;
        }
    }
    

    return 0;
}