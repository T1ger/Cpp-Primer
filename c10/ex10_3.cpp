#include <iostream>
#include <vector>
#include <numeric>

using std::accumulate;
using std::vector;
using std::cout;
using std::endl;

int main() {
    vector<int> ivect(10, 9);
    cout << accumulate(ivect.cbegin(), ivect.cend()-1, 0) << endl;

    return 0;
}