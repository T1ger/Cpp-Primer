#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

void printVec(const vector<string> &svec) {
    for (auto s : svec) cout << s << " ";
    cout << endl;
}

bool isShorter(const string& s1, const string& s2) {
    return s1.size() < s2.size();
}

void elimDups(vector<string> &svec) {
    printVec(svec);
    
    sort(svec.begin(), svec.end());
    printVec(svec);

    auto end_unique = unique(svec.begin(), svec.end());
    printVec(svec);

    svec.erase(end_unique, svec.end());
    printVec(svec);
}

int main() {
    vector<string> svec{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"}; 
    
    elimDups(svec);
    stable_sort(svec.begin(), svec.end(), isShorter);
    printVec(svec);

    return 0;
}