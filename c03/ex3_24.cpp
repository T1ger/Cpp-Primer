#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main() {

    vector<int> ivec;
    int n = 0;
    while (cin >> n) {
        ivec.push_back(n);
    }

    if (ivec.empty()) {
        cout << "Error! Empty vector!" << endl;
        return -1;
    }

    cout << "Sum of each pair of adjacent elements are: " << endl;
    
    for (auto it = ivec.begin(); it != ivec.end(); it++) {
        if (ivec.end() - ivec.begin() == 1) {
            cout << *it << " ";
        } else if (it == ivec.begin()) {
            cout << *it + *(it + 1) << " ";
        } else if (it == ivec.end() - 1) {
            cout << *(it - 1) + *it << " ";
        } else {
            cout << *(it - 1) + *it + *(it + 1) << " ";
        }
    }
    /*
    for (decltype(ivec.size()) i = 0; i != ivec.size(); i++) {
        if (ivec.size() == 1) cout << ivec[i] << " ";
        else if (i == 0) cout << ivec[i] + ivec[i+1] << " ";
        else if (i == ivec.size() - 1) cout << ivec[i-1] + ivec[i] << " ";
        else cout << ivec[i-1] + ivec[i] + ivec[i+1] << " ";
    }
    */
    cout << endl;


    cout << "Sum of each pair of first-last elements are: " << endl;
    
    for (auto it = ivec.begin(); it != ivec.end(); it++) {
        if (ivec.end() - ivec.begin() == 1) {
            cout << *it << " ";
        } else if (it - ivec.begin() == ivec.end() - 1 - it) {
            cout << *it << " ";
        } else {
            cout << *it + *(ivec.end() - 1 - it + ivec.begin()) << " ";
        }
    }

    /*
    for (decltype(ivec.size()) i = 0; i != ivec.size(); i++) {
        if (ivec.size() == 1) cout << ivec[i] << " ";
        else if (i == ivec.size() - 1 - i) cout << ivec[i] << " ";
        else cout << ivec[i] + ivec[ivec.size()-1-i] << " ";
    }
    */
    cout << endl;

    return 0;
}