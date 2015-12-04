#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main() {

    vector<int> v1;                // size:0,  no values.
    vector<int> v2(10);            // size:10, value:0
    vector<int> v3(10, 42);        // size:10, value:42
    vector<int> v4{ 10 };          // size:1,  value:10
    vector<int> v5{ 10, 42 };      // size:2,  value:10, 42
    vector<string> v6{ 10 };       // size:10, value:""
    vector<string> v7{ 10, "hi" }; // size:10, value:"hi"

    cout << "v1 has " << v1.size() << " elements: " << endl;
    if (!v1.empty()) {
        for (auto it1 = v1.cbegin(); it1 != v1.cend(); it1++) cout << *it1 << " ";
        cout << endl;
    } else {
        cout << "N/A" << endl;
    }

    cout << "v2 has " << v2.size() << " elements: " << endl;
    if (!v2.empty()) {
        for (auto it2 = v2.cbegin(); it2 != v2.cend(); it2++) cout << *it2 << " ";
        cout << endl;
    } else {
        cout << "N/A" << endl;
    }

    cout << "v3 has " << v3.size() << " elements: " << endl;
    if (!v3.empty()) {
        for (auto it3 = v3.cbegin(); it3 != v3.cend(); it3++) cout << *it3 << " ";
        cout << endl;
    } else {
        cout << "N/A" << endl;
    }

    cout << "v4 has " << v4.size() << " elements: " << endl;
    if (!v4.empty()) {
        for (auto it4 = v4.cbegin(); it4 != v4.cend(); it4++) cout << *it4 << " ";
        cout << endl;
    } else {
        cout << "N/A" << endl;
    }

    cout << "v5 has " << v5.size() << " elements: " << endl;
    if (!v5.empty()) {
        for (auto it5 = v5.cbegin(); it5 != v5.cend(); it5++) cout << *it5 << " ";
        cout << endl;
    } else {
        cout << "N/A" << endl;
    }

    cout << "v6 has " << v6.size() << " elements: " << endl;
    if (!v6.empty()) {
        for (auto it6 = v6.cbegin(); it6 != v6.cend(); it6++) cout << *it6 << " ";
        cout << endl;
    } else {
        cout << "N/A" << endl;
    }
    
    cout << "v7 has " << v7.size() << " elements: " << endl;
    if (!v7.empty()) {
        for (auto it7 = v7.cbegin(); it7 != v7.cend(); it7++) cout << *it7 << " ";
        cout << endl;
    } else {
        cout << "N/A" << endl;
    }

    return 0;
}