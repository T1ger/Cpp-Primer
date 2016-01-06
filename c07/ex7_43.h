#ifndef EX7_43_H
#define EX7_43_H

#include <iostream>

class NoDefault {
public:
    NoDefault(int i) { std::cout << "NoDefault(int i) constructed." << std::endl; }
};

class C {
public:
    C(int i = 0) : n(i) { std::cout << "C(int i = 0) constructed." << std::endl; }
private:
    NoDefault n;
};

#endif