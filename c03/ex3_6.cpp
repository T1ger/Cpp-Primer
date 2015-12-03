#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
	string s("Hello World!");
	cout << "String was: '" << s << "'" << endl;
	for (auto &c : s) c = 'X';
	cout << "String  is: '" << s << "'" << endl;
	
	return 0;
}