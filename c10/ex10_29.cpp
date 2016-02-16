#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    ifstream ifs("../data/letter.txt");
    vector<string> svec;
    
    istream_iterator<string> s_iter(ifs), eof;
    
    copy(s_iter, eof, back_inserter(svec));
    
    for (auto &s : svec) cout << s << " ";
    cout << endl;

    return 0;
}