#include <iostream>
#include <string>
#include <forward_list>

std::forward_list<std::string> &find_insert_string(std::forward_list<std::string> &fl, const std::string &s1, const std::string &s2) {
    auto prev = fl.before_begin();
    auto curr = fl.begin();
    while (curr != fl.end()) {
        if (*curr == s1) {
            fl.insert_after(curr, s2);
            return fl;
        } else {
            prev = curr;
            ++curr;
        }
    }
    
    fl.insert_after(prev, s2);
    
    return fl;
}
ˆ
int main() {
    std::string s1 = "Hello";
    std::string s2 = "World";
    std::forward_list<std::string> fl{"Hell", ", " "South", "Carolina", "!"};
    for (auto s : find_insert_string(fl, s1, s2)) std::cout << s << " ";
    std::cout << std::endl;
    

    return 0;
}