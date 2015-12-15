#include <iostream>

using namespace std;

int fact(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) result *= i;
    return result;
}

int main(int argc, char *argv[]) {
    cout << fact(5) << endl;

    return 0;
}