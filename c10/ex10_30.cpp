#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main() {
    istream_iterator<int> in_iter(cin), eof;
    ostream_iterator<int> out_iter(cout, " ");
    vector<int> ivec;
    while (in_iter != eof) {
        ivec.push_back(*in_iter++);
    }
    sort(ivec.begin(), ivec.end());
    copy(ivec.cbegin(), ivec.cend(), out_iter);

    return 0;
}