#include <iostream>
#include <vector>
#include <string>
//#define NDEBUG
using namespace std;

void print_vector(vector<string>::const_iterator begin, const vector<string>::const_iterator end) {
    #ifndef NDEBUG
    cerr << __FILE__
         << " : in function " << __func__ 
         << "at line " << __LINE__ 
         << ": array size is " << end - begin 
         << " at " << __TIME__ << endl;
    #endif
    if (begin != end) {
        cout << *begin << endl;;
        print_vector(begin+1, end);
    }
}
int main() {
    vector<string> s{"Hello", "World", "!!!"};
    print_vector(s.cbegin(), s.cend());

    return 0;
}