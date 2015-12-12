#include <iostream>
#include <vector>

using namespace std;
int main() {
    char c;
    vector<char> cvec;
    while (cin >> c) {
        cvec.push_back(c);
    }
    
    for (decltype(cvec.size()) i = 0; i != cvec.size(); ++i) {
        cout << cvec[i] << " ";
    }
    cout << endl;
    
    // switch while and for
    vector<char> c2vec;
    for (char c2; cin >> c2;) c2vec.push_back(c2);
    
    int i = -1;
    while (++i < c2vec.size()) {
        cout << c2vec[i] << " ";
    }
    cout << endl;
    
    return 0;
}