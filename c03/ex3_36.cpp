#include <iostream>
#include <vector>

using namespace std;

bool compare_int_array(const int *arr1b, const int *arr1e, const int *arr2b, const int *arr2e) {
    if (arr1e - arr1b != arr2e - arr2b) return false;
    for (size_t i = 0; i != arr1e - arr1b; ++i) {
        if (*(arr1b + i) != *(arr2b + i)) {
            return false;
        }
    }
    return true;
}

bool compare_int_vector(const vector<int> v1, const vector<int> v2) {
    if (v1 == v2) {
        return true;
    } else {
        return false;
    }
}

int main() {
    
    int arr1[] = {0, 1, 3};
    int arr2[] = {0, 1, 2};
    
    if (compare_int_array(begin(arr1), end(arr1), begin(arr2), end(arr2))) {
        cout << "arrays are equal." << endl;
    } else {
        cout << "arrays are not equal." << endl;
    }
    
    vector<int> vec1{0, 1, 2};
    vector<int> vec2{0, 1, 2};

    if (compare_int_vector(vec1, vec2)) {
        cout << "vectors are equal." << endl;
    } else {
        cout << "vectors are not equal." << endl;
    }
    
    return 0;
}