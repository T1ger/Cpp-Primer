#include <iostream>
#include <vector>

using namespace std;

vector<int>* alloc_vector() {
    return new vector<int>(); 
}

vector<int>* init_vector(vector<int>* vec) {
    for (int i; cout << "Enter:\n", cin >> i; vec->push_back(i));
    return vec;
}

ostream& print_vector(vector<int>* vec) {
    for (int i : *vec) cout << i << " ";
    return cout;
}

int main() {
    auto vec = init_vector(alloc_vector());
    print_vector(vec) << endl;
    
    delete vec;

    return 0;
}