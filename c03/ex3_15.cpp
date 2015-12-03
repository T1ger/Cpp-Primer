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
	
	cout << "There are " << svec.size() << " elements in svec." << endl;
	
	return 0;
}