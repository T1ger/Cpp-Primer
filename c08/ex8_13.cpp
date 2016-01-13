#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

struct PersonInfo {
    std::string name;
    std::vector<std::string> phones;
};

bool valid(const std::string &nums) {
    return isdigit(nums[0]);
}

std::string format(const std::string &nums) {
    return nums.substr(0, 3) + "-" + nums.substr(3, 3) + "-" + nums.substr(6);
}

int main() {
    std::string line, word;
    std::vector<PersonInfo> people;
    std::ifstream ifs("../data/person_info.txt");
    std::istringstream record;
    while (std::getline(ifs, line)) {
        PersonInfo info;
        record.clear();
        record.str(line);
        record >> info.name;
        while (record >> word) {
            info.phones.push_back(word);
        }
        people.push_back(info);
    }
    
    for (const auto &entry : people) {
        std::ostringstream formatted, badNums;
        for (const auto &nums : entry.phones) {
            if (!valid(nums)) {
                badNums << " " << nums;
            } else {
                formatted << " " << format(nums);
            }
        }
        if (badNums.str().empty()) std::cout << entry.name << " " << formatted.str() << std::endl;
        else std::cerr << "input error: " << entry.name << " invalid number(s) " << badNums.str() << std::endl;
    }

    return 0;
}