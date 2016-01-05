#include "ex7_32.h"

int main() {

    Window_mgr mgr;
    Screen &s = mgr.get(0);
    s.display(std::cout);
    std::cout << "LINE END"<< std::endl;
    s.set(0, 1, 'x');
    s.display(std::cout);
    std::cout << "LINE END"<< std::endl;
    mgr.clear(0);
    s.display(std::cout);
    std::cout << "LINE END"<< std::endl;

    return 0;
}