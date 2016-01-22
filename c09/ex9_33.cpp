#include <iostream>
#include <vector>

using std::vector;

int main() {
    vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto begin = v.begin();
    // safer: recalculate end on each trip whenever the loop adds/erases elements 
    while (begin != v.end()) { 
        // do some processing 
        ++begin; // advance begin because we want to insert after this element 
        begin = v.insert(begin, 42); // insert the new value 
        ++begin; // advance begin past the element we just added 
    }
    
    for (auto i : v) std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}