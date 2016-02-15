#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include "../c07/ex7_26.h"

using namespace std;

bool compareIsbn(const Sales_data& s1, const Sales_data& s2) {
    return s1.isbn() < s2.isbn();
}

int main() {
    Sales_data s1("111-2222-333"), s2("112-2222-333"), s3("113-2222-333");
    vector<Sales_data> svec{s3, s2, s1};
    sort(svec.begin(), svec.end(), compareIsbn);
    
    for (const auto &ele : svec) {
        cout << ele.isbn() << " ";
    }
    cout << endl;

    return 0;
}