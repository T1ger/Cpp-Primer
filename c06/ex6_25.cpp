#include <iostream>
#include <string>

using namespace std;
int main(int argc, char* argv[]) {
    string s;
    if (argc == 3) {
        for (size_t i = 1; i != argc; ++i) {
            s += string(argv[i]) + " ";
        }
        
        cout << s << endl;
    } else {
        cout << "Wrong arguments" << endl;
    }

    return 0;
}