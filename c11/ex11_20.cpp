#include <iostream>
#include <string>
#include <map>
#include <set>
#include <algorithm>

using namespace std;
int main() {
    
    map<string, size_t> word_count;
    
    string word;
    while (cin >> word) {
        // ++word_count[word];
        auto result = word_count.insert({word, 1});
        if (!result.second) {
            ++result.first->second;
        }
    }
    
    for (const auto &w : word_count)
        cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times" : " time") << endl;

    return 0;
}