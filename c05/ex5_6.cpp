#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main() {
    const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
    string lettergrade;
    int grade;
    
    while (cin >> grade) {
        lettergrade = grade < 60 ? scores[0] : scores[(grade - 50) / 10];
        
        lettergrade += (grade == 100 || grade < 60 ? "" : grade % 10 > 7 ? "+" : grade % 10 < 3 ? "-" : "");
        // if (grade < 60) lettergrade = scores[0];
        // else lettergrade = scores[(grade - 50) / 10];
        
        cout << lettergrade << endl;
    }
    
    return 0;
}