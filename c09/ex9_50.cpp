#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::endl;

int main() {
    vector<string> svec{"1", "2", "3", "4.5"};
    int sum_i = 0;
    double sum_d = 0.0;
    for (auto const &s : svec) {
        sum_i += stoi(s);
        sum_d += stod(s);
    }
    cout << sum_i << " " << sum_d << endl;

    return 0;
}