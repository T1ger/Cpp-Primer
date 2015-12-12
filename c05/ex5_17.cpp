#include <iostream>
#include <vector>

using namespace std;

bool is_prefix_int_vector(vector<int> i1vec, vector<int> i2vec) {
    if (i1vec.size() > i2vec.size()) {
        vector<int> tmp = i1vec;
        i1vec = i2vec;
        i2vec = tmp;
    }
    
    for (decltype(i1vec.size()) i = 0; i != i1vec.size(); ++i) {
        if (i1vec[i] != i2vec[i]) return false;
    }
    return true;
}

int main() {
    vector<int> i1vec{0, 1, 1, 2};
    vector<int> i2vec{0, 1, 1, 2, 3, 5, 8};
    
    if (is_prefix_int_vector(i2vec, i1vec)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}