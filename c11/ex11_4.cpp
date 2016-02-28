#include <iostream>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include <cctype>

using namespace std;
int main() {
    
    map<string, size_t> word_count;
    set<string> exclude = {"the", "but", "and", "or", "an", "a"};
    
    string word;
    while (cin >> word) {
        for (auto &c : word) c = tolower(c);
        word.erase(remove_if(word.begin(), word.end(), ::ispunct), word.end()); // Add :: to the beginning of isspace, ispunct and isdigit, since they have overloads that the compiler can't decide on which to use
        if (exclude.find(word) == exclude.end()) {
            ++word_count[word];
        }
    }
    
    for (const auto &w : word_count)
        cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times" : " time") << endl;

    return 0;
}