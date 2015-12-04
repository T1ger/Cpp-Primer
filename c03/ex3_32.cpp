#include <iostream>
#include <vector>

using namespace std;
int main() {
    int arr1[10];
    for (int i = 0; i != 10; ++i) {
        arr1[i] = i;
    }
    
    for (auto i : arr1) {
        cout << i << " ";
    }
    cout << endl;
    
    int arr2[10];
    for (int i = 0; i != 10; ++i) {
        arr2[i] = arr1[i];
    }
    for (auto i : arr2) {
        cout << i << " ";
    }
    cout << endl;
    
    // vector
    vector<int> vec1(10, 0);
    for (int i = 0; i != 10; ++i) {
        vec1[i] = arr1[i];
    }
    vector<int> vec2(vec1);
    
    for (auto i : vec2) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}