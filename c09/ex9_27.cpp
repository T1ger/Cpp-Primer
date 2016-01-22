#include <iostream>
#include <forward_list>

int main() {
    int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
    std::forward_list<int> fli(ia, std::end(ia));
    std::cout << "Before filter: " << std::endl;
    for (auto i : fli) std::cout << i << " ";
    std::cout << std::endl;
    
    auto prev = fli.before_begin();
    auto curr = fli.begin();
    while (curr != fli.end()) {
        if (*curr % 2 != 0) {
            prev = curr;
            ++curr;
        } else curr = fli.erase_after(prev);
    }
    
    std::cout << "After filter: " << std::endl;
    for (auto i : fli) std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}