#ifndef EX7_22_H
#define EX7_22_H

#include <iostream>
#include <string>

class Person {
    friend std::istream& read(std::istream&, Person&);
    friend std::ostream& print(std::ostream&, const Person&);
public:
    // constructors
    Person() = default;
    Person(const std::string &n) : name(n) { }
    Person(const std::string &n, const std::string &a) : name(n), address(a) { }
    
    std::string const& get_name() const {return name;}
    std::string const& get_address() const {return address;}
    
private:
    std::string name;
    std::string address;
};

std::istream& read(std::istream &is, Person &p) {
    is >> p.name >> p.address;
    return is;
}

std::ostream& print(std::ostream &os, const Person &p) {
    os << p.name << " " << p.address;
    return os;
}

#endif