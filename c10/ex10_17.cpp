#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include "../c07/ex7_26.h"

using namespace std;

int main() {
    Sales_data s1("111-2222-333"), s2("112-2222-333"), s3("113-2222-333");
    vector<Sales_data> svec{s3, s2, s1};
    sort(svec.begin(), svec.end(), [](const Sales_data& lhs, const Sales_data& rhs){return lhs.isbn() < rhs.isbn();});
    
    for (const auto &ele : svec) {
        cout << ele.isbn() << " ";
    }
    cout << endl;

    return 0;
}