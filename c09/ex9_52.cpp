#include <iostream>
#include <stack>

using std::cout;
using std::endl;
using std::string;
using std::stack;

int main() {
    string s("You are my (sunshine)");
    bool isSeen = false;
    stack<char> stk;
    for (auto c : s) {
        if (c == '(') isSeen = true;
        if (c == ')') isSeen = false;
        if (isSeen && c != '(') stk.push(c);
    }
    
    string new_str;
    while (!stk.empty()) {
        char c = stk.top();
        new_str.push_back(c);
        stk.pop();
    }
    
    s.replace(s.find("(")+1, new_str.size(), new_str);
    
    cout << s << endl;

    return 0;
}