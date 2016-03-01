#include <iostream>
#include <string>
#include <map>
#include <list>
#include <vector>

int main() {
    
    std::map<std::string, std::list<std::size_t>> m;
    
    std::map<std::vector<int>::iterator, int> mv;
    
    std::map<std::list<int>::iterator, int> ml;     

    return 0;
}