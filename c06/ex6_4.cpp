#include <iostream>

using namespace std;

int fact() {
    int n;
    int result = 1;
    cout << "Please input a number to fact: " << endl;
    cin >> n;
    for (int i = 1; i <= n; ++i) result *= i;
    return result;
}

int main(int argc, char *argv[]) {
    cout << fact() << endl;

    return 0;
}