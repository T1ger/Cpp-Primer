#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
int main() {
    vector<char> cvec{'h', 'e', 'l', 'l', 'o'};
    
    string s(cvec.begin(), cvec.end());
    std::cout << s << std::endl;

    return 0;
}