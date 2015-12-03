#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main() {
	
	vector<int> v1;                // size:0,  no values.
	vector<int> v2(10);            // size:10, value:0
	vector<int> v3(10, 42);        // size:10, value:42
	vector<int> v4{ 10 };          // size:1,  value:10
	vector<int> v5{ 10, 42 };      // size:2,  value:10, 42
	vector<string> v6{ 10 };       // size:10, value:""
	vector<string> v7{ 10, "hi" }; // size:10, value:"hi"
	
	cout << "v1 has " << v1.size() << " elements: " << endl;
	if (v1.size() > 0) {
		for (auto a : v1) cout << a << " ";
		cout << endl;
	} else {
		cout << "N/A" << endl;
	}
	
	cout << "v2 has " << v2.size() << " elements: " << endl;
	if (v2.size() > 0) {
		for (auto a : v2) cout << a << " ";
		cout << endl;
	} else {
		cout << "N/A" << endl;
	}
	
	cout << "v3 has " << v3.size() << " elements: " << endl;
	if (v3.size() > 0) {
		for (auto a : v3) cout << a << " ";
		cout << endl;
	} else {
		cout << "N/A" << endl;
	}
	
	cout << "v4 has " << v4.size() << " elements: " << endl;
	if (v4.size() > 0) {
		for (auto a : v4) cout << a << " ";
		cout << endl;
	} else {
		cout << "N/A" << endl;
	}
	
	cout << "v5 has " << v5.size() << " elements: " << endl;
	if (v5.size() > 0) {
		for (auto a : v5) cout << a << " ";
		cout << endl;
	} else {
		cout << "N/A" << endl;
	}
	
	cout << "v6 has " << v6.size() << " elements: " << endl;
	if (v6.size() > 0) {
		for (auto a : v6) cout << a << " ";
		cout << endl;
	} else {
		cout << "N/A" << endl;
	}
	
	cout << "v7 has " << v7.size() << " elements: " << endl;
	if (v7.size() > 0) {
		for (auto a : v7) cout << a << " ";
		cout << endl;
	} else {
		cout << "N/A" << endl;
	}
	
	return 0;
}