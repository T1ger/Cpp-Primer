#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main() {
	
	vector<string> svec;
	string s;
	
	while (cin >> s) {
		svec.push_back(s);
	}
	
	for (auto &a : svec) {
		for (auto &c : a) {
			c = toupper(c);
		}
	}
	
	int count = 0;
	for (auto a : svec) {
		if (++count == 8) {
			cout << a << " " << endl;
			count = 0;
		} else {
			cout << a << " ";
		}
		
	}
	cout << endl;
	
	return 0;
}