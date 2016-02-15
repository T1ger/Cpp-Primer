#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

void elimDups(vector<string> &svec) 
{    
    sort(svec.begin(), svec.end());

    auto end_unique = unique(svec.begin(), svec.end());

    svec.erase(end_unique, svec.end());
}

string make_plural(size_t ctr, const string &word, const string &ending) {
    return (ctr > 1) ? word + ending : word;
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    elimDups(words);
    stable_sort(words.begin(), words.end(), [](const string& a, const string& b){return a.size() < b.size();});
    
    auto wc = find_if(words.begin(), words.end(), [sz](const string& a){return a.size() >= sz;});
    auto count = words.end() - wc;
    cout << count << " " << make_plural(count, "word", "s") << " of length " << sz << "or longer" << endl;
    
    for_each(wc, words.end(), [](const string &s){cout << s << " ";});
    cout << endl;
}

int main() {
    vector<string> svec{"Hello", "World", "It", "Is", "Beautiful", "Right"};
    biggies(svec, 4);

    return 0;
}