#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int main() {
    
    vector<string> svec{"Hello", "World", "It", "Is", "Beautiful", "Right"};
    
    cout << count_if(svec.begin(), svec.end(), [](const string& s){return s.size() > 6;}) << endl;
    

    return 0;
}