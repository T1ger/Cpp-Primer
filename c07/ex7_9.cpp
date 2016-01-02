#include <iostream>
#include <string>

struct Person {
    std::string name;
    std::string address;
    
    std::string const& get_name() const {return name;}
    std::string const& get_address() const {return address;}
};

std::istream& read(std::istream& is, Person &p) {
    std::cout << "Input name and address: " << std::endl;
    is >> p.name >> p.address;
    std::cout << "Input success!" << std::endl;
    return is;
}

std::ostream& print(std::ostream& os, const Person p) {
    os << p.get_name() << " " << p.get_address();
    return os;
}

int main() {
    Person sj;
    
    read(std::cin, sj);
    print(std::cout, sj) << std::endl;

    return 0;
}