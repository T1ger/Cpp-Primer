#include <iostream>
#include "ex12_2.h"

int main() {
    const StrBlob test1{"Hello", "World", "Java"};
    std::cout << test1.front() << " " << test1.back() << std::endl;
    
    StrBlob test2{"Hello", "World", "Objective-C"};
    std::cout << test2.front() << " " << test2.back() << std::endl;
    test2.back() = "Swift";
    std::cout << test2.front() << " " << test2.back() << std::endl;

    return 0;
}