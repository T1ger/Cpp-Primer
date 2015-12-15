#include <iostream>

using namespace std;

int absolute_value(int n) {
    if (n < 0) n *= 1;
    return n;
}

int main(int argc, char *argv[]) {
    cout << absolute_value(-5) << endl;

    return 0;
}