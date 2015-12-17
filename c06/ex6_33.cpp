#include <iostream>
#include <vector>
#include <string>

using namespace std;

void print_vector(vector<string>::const_iterator begin, const vector<string>::const_iterator end) {
    if (begin != end) {
        cout << *begin << " ";
        print_vector(begin+1, end);
    }
}
int main() {
    vector<string> s{"Hello", "World", "!!!"};
    print_vector(s.cbegin(), s.cend());

    return 0;
}