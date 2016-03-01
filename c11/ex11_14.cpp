#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <utility>

using std::map;
using std::pair;
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
    map<string, vector<pair<string, string>>> family;    
    string last_name, first_name, birthday;
    cout << "Please input the family name: " << endl;
    while (cin >> last_name) {
        cout << "Please input children's names: " << endl;
        while (cin >> first_name >> birthday) {
            family[last_name].push_back({first_name, birthday});
        }
        cout << "Please input the family name: " << endl;
    }
    
    for (auto const &l : family) {
        cout << l.first << ": " << endl;
        for (auto const &f : l.second)
            cout << f.first << " " << f.second << endl;;
        cout << endl;
    }
    

    return 0;
}