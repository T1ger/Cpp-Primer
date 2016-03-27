#include <iostream>
#include <vector>
#include <memory>

using namespace std;

shared_ptr<vector<int>> alloc_vector() {
    return make_shared<vector<int>>();
}

shared_ptr<vector<int>> init_vector(shared_ptr<vector<int>> vec) {
    for (int i; cout << "Enter:\n", cin >> i; vec->push_back(i));
    return vec;
}

ostream& print_vector(shared_ptr<vector<int>> vec) {
    for (int i : *vec) cout << i << " ";
    return cout;
}

int main() {
    auto vec = init_vector(alloc_vector());
    print_vector(vec) << endl;
    
    return 0;
}