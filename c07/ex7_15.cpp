#include "ex7_15.h"

int main() {
    Person p1("Steve");
    std::cout << p1.get_name() << std::endl;

    Person p2("John Snow", "Winter Fell");
    std::cout << p2.get_name() << std::endl;
    std::cout << p2.get_address() << std::endl;

    return 0;
}