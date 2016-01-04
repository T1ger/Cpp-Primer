#ifndef EX7_24_H
#define EX7_24_H
#include <iostream>
#include <string>

class Screen {
public:
    typedef std::string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') { }
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) { }
    
    char get() const { return contents[cursor]; }
    char get(pos ht, pos wd) const;
    Screen &move(pos r, pos c);

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;    
};

char Screen::get(pos r, pos c) {
    pos row = r * width;
    return contents[row+c];
}

Screen& Screen::move(pos r, pos c) {
    pos row = r * width;
    cursor = row + c;
    return *this;
}

#endif