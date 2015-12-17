#include <iostream>
//#include <initializer_list>

using namespace std;

int int_sum(initializer_list<int> li) {
    int sum = 0;
    for (auto i : li) {
        sum += i;
    }
    return sum;
}

int main() {
    cout << int_sum({1, 2, 3, 4}) << endl;

    return 0;
}