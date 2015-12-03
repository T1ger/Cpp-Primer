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
	for (decltype(ivec.size()) i = 0; i != ivec.size(); i++) {
		if (ivec.size() == 1) cout << ivec[i] << " ";
		else if (i == 0) cout << ivec[i] + ivec[i+1] << " ";
		else if (i == ivec.size() - 1) cout << ivec[i-1] + ivec[i] << " ";
		else cout << ivec[i-1] + ivec[i] + ivec[i+1] << " ";
	}
	cout << endl;
	
	
	cout << "Sum of each pair of first-last elements are: " << endl;

	for (decltype(ivec.size()) i = 0; i != ivec.size(); i++) {
		if (ivec.size() == 1) cout << ivec[i] << " ";
		else if (i == ivec.size() - 1 - i) cout << ivec[i] << " ";
		else cout << ivec[i] + ivec[ivec.size()-1-i] << " ";
	}
	cout << endl;
	
	return 0;
}