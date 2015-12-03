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
	int i = 0;
	while (cin >> i) {
		ivec.push_back(i);
	}
	
	cout << "There are " << ivec.size() << " elements in ivec." << endl;
	
	return 0;
}