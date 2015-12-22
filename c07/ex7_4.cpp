#include <iostream>
#include <string>

struct Person {
    std::string name;
    std::string address;
};

int main() {
    Person sj;
    
    sj.name = "Steve Jobs";
    sj.address = "111 Heaven Rd";

    return 0;
}