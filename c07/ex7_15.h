#ifndef EX7_15_H
#define EX7_15_H

#include <iostream>
#include <string>

struct Person {
    // constructors
    Person() = default;
    Person(const std::string &n) : name(n) { }
    Person(const std::string &n, const std::string &a) : name(n), address(a) { }
    
    std::string name;
    std::string address;
    
    std::string const& get_name() const {return name;}
    std::string const& get_address() const {return address;}
};

#endif