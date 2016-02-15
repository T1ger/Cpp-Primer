#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool hasFiveMoreChar(const string& s) {
    return s.size() >= 5;
}

void printVec(const vector<string>& svec) {
    for (const auto &s : svec) cout << s << " ";
    cout << endl;
}

int main() {
    
    vector<string> svec{"Hello", "It", "Is", "A", "Beautiful", "World"};
    printVec(svec);
    
    auto iter = partition(svec.begin(), svec.end(), hasFiveMoreChar);
    
    for (auto s = svec.begin(); s != iter; ++s) {
        cout << *s << " ";
    }
    cout << endl;

    return 0;
}