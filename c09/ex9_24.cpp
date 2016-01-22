#include <iostream>
#include <vector>

int main() {
    std::vector<int> v1{};
    std::cout << v1.at(0) << std::endl;
    std::cout << v1[0] << std::endl;
    std::cout << v1.front() << std::endl;
    std::cout << *v1.cbegin() << std::endl;

    return 0;
}