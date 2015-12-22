#include <iostream>
#include <string>

struct Person {
    std::string name;
    std::string address;
    
    std::string const& get_name() const {return name;}
    std::string const& get_address() const {return address;}
};

int main() {
    Person sj;
    
    sj.name = "Steve Jobs";
    sj.address = "111 Heaven Rd";
    
    std::cout << "Name is: " << sj.get_name() << std::endl;
    std::cout << "Address is: " << sj.get_address() << std::endl;

    return 0;
}