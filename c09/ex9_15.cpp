#include <iostream>
#include <vector>

bool is_equal_vector(std::vector<int> v1, std::vector<int> v2) {
    if (v1.size() == v2.size()) {
        for (int i = 0; i != v1.size(); ++i) {
            if (v1[i] != v2[i]) {
                return false;
            }
        }
        return true;
    } else {
        return false;
    }
}

int main() {
    std::vector<int> v1{1, 2, 3, 4, 5, 6};
    std::vector<int> v2{2, 3, 4};
    
    if (is_equal_vector(v1, v2)) {
        std::cout << "equal" << std::endl;
    } else {
        std::cout << "not equal" << std::endl;
    }
    
    std::cout << "==========" << std::endl;
    
    std::cout << (v1 == v2 ? "equal" : "not equal") << std::endl;

    return 0;
}