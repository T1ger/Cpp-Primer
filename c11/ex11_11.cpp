#include <set>
#include "../c07/ex7_26.h"

bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs) {
    return lhs.isbn() < rhs.isbn();
}

int main() {
    
    using Less = bool (*)(const Sales_data&, const Sales_data&);
    std::multiset<Sales_data, Less> bookstore(compareIsbn);    

    return 0;
}