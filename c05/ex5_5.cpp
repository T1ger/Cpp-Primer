#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main() {
    const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
    string lettergrade;
    int grade;
    
    while (cin >> grade) {
        if (grade < 60) lettergrade = scores[0];
        else if (grade >= 100) lettergrade = scores[5];
        else lettergrade = scores[(grade - 50) / 10] + (((grade % 10) > 7) ? "+" : (((grade % 10)) < 3 ? "-" : ""));
        
        cout << lettergrade << endl;
    }
    
    return 0;
}