#include <iostream>
#include <string>
#include <fstream>

using std::string;
using std::ifstream;
using std::cout;
using std::endl;

int main() {
	ifstream ifs("../data/letter.txt");
	if (!ifs) return -1;
	
	string longest;
	string tmp;
	string ruler("acemnorsuvwxz");
	while (ifs >> tmp) {
//		cout << tmp << " ";
		if (tmp.find_first_not_of(ruler) == string::npos) {
			longest = longest.size() <= tmp.size() ? tmp : longest;
		}
	}
	if (longest.size() > 0) cout << "longest word without ascenders nor descenders is: " << longest << endl;
	else cout << "not find word." << endl;

	return 0;
}