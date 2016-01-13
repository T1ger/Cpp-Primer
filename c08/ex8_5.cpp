#include <iostream>
#include <fstream>
#include <string>
#include <vector>

std::vector<std::string> read_file_to_vector(const std::string &file_name) {
    std::vector<std::string> s_vec;
    std::ifstream input(file_name);
    if (input) {
        std::string word;
        while (input >> word) {
            s_vec.push_back(word);
        }
    }
    return s_vec;
}

int main(int argc, char* argv[]) {
    for (auto &v : read_file_to_vector(argv[1])) {
        std::cout << v << std::endl;
    }

    return 0;
}