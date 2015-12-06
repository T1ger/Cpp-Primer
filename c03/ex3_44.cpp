#include <iostream>

using namespace std;
int main() {
    
    int ia[3][4] = { {1, 2, 3, 4},
                     {5, 6, 7, 8}, 
                     {9, 10, 11, 12}
                    };
    using int_array = int[4];
    
    // range
    for (int_array &x : ia) {
        for (const int y : x) {
            cout << y << " ";
        }
        cout << endl;
    }
    
    // subscripts
    for (size_t x = 0; x != 3; ++x) {
        for (size_t y = 0; y != 4; ++y) {
            cout << ia[x][y] << " ";
        }
        cout << endl;
    }
    
    // pointers
    for (int_array *x = ia; x != ia + 3; ++x) {
        for (const int *y = *x; y != *x + 4; y++) {
            cout << *y << " ";
        }
        cout << endl;
    }
    
    return 0;
}