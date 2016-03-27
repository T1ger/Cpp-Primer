#include <iostream>
#include <memory>
#include <string>

int main() {
    std::unique_ptr<std::string> p(new std::string("Hello World"));
    
    // std::unique_ptr<std::string> p2(p); 
    // error: call to implicitly-deleted copy constructor of 'std::unique_ptr<std::string>' (aka 'unique_ptr<basic_string<char, char_traits<char>, allocator<char> > >')
    
    // std::unique_ptr<std::string> p3 = p;
    // error: call to implicitly-deleted copy constructor of 'std::unique_ptr<std::string>' (aka 'unique_ptr<basic_string<char, char_traits<char>, allocator<char> > >')
    
    std::cout << *p << std::endl;
    
    p.reset(nullptr);

    return 0;
}