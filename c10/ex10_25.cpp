#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <functional>

using namespace std;
using std::placeholders::_1;

void elimDups(vector<string> &svec) 
{    
    sort(svec.begin(), svec.end());

    auto end_unique = unique(svec.begin(), svec.end());

    svec.erase(end_unique, svec.end());
}

string make_plural(size_t ctr, const string &word, const string &ending) {
    return (ctr > 1) ? word + ending : word;
}

bool check_size(const string& s, string::size_type sz) {
    return s.size() >= sz;
}

void biggies(vector<string> &words, string::size_type sz)
{
    elimDups(words);
    stable_sort(words.begin(), words.end(), [](const string& a, const string& b){return a.size() < b.size();});
    
    auto wc = partition(words.begin(), words.end(), bind(check_size, _1, sz));
    auto count = wc - words.begin();
    cout << count << " " << make_plural(count, "word", "s") << " of length " << sz << " or longer" << endl;
    
    for_each(words.begin(), wc, [](const string &s){cout << s << " ";});
    cout << endl;
}

int main() {
    vector<string> svec{"Hello", "World", "It", "Is", "Beautiful", "Right"};
    biggies(svec, 4);

    return 0;
}