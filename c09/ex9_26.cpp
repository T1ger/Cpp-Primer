#include <iostream>
#include <vector>
#include <list>

int main() {
    int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
    std::vector<int> vi;
    std::list<int> li;
    std::cout << "Before filter: " << std::endl;

    for (size_t i : ia) {
        vi.push_back(i);
        li.push_back(i);
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    auto iv = vi.begin();
    while (iv != vi.end()) {
        if (*iv % 2 == 0) ++iv;
        else iv = vi.erase(iv);
    }
    auto il = li.begin();
    while (il != li.end()) {
        if (*il % 2 != 0) ++il;
        else il = li.erase(il);
    }
    
    std::cout << "After filter: " << std::endl;
    for (auto i : vi) std::cout << i << " ";
    std::cout << std::endl;
    for (auto i : li) std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}