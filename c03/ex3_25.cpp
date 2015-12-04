#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main() {

    vector<unsigned> scores(11, 0);
    unsigned grade;
    
    while (cin >> grade) {
        auto it = scores.begin() + grade / 10;
        *it += 1;
    }
    
    for (auto s : scores) cout << s << " ";
    
    cout << endl;

    return 0;
}