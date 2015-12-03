#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    string str, tmp;

    while (cin >> tmp) {
        str += tmp;
    }

    cout << str << endl;

    return 0;
}