#ifndef EX7_19_H
#define EX7_19_H

#include <iostream>
#include <string>

class Person {
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

#endif