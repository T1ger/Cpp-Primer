#ifndef EX7_32_H
#define EX7_32_H
#include <iostream>
#include <string>
#include <vector>

class Screen;

class Window_mgr {
public:
    using ScreenIndex = std::vector<Screen>::size_type;
    // constructors
    Window_mgr();
    
    Screen& get(ScreenIndex i) { return screens[i]; };
    inline void clear(ScreenIndex);
private:
    std::vector<Screen> screens;
};


class Screen {
    //friend Window_mgr;
    friend void Window_mgr::clear(ScreenIndex);
public:
    typedef std::string::size_type pos;
    
    // constructors
    Screen() = default;
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') { }
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) { }
    
    char get() const { return contents[cursor]; }
    char get(pos ht, pos wd) const;
    Screen &move(pos r, pos c);
    Screen &set(char ch);
    Screen &set(pos r, pos c, char ch);
    Screen &display(std::ostream &os) { do_display(os); return *this; }
    const Screen &display(std::ostream& os) const { do_display(os); return *this; }

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
    void do_display(std::ostream &os) const {
        os << contents;
    }
};

char Screen::get(pos r, pos c) const {
    pos row = r * width;
    return contents[row+c];
}

Screen& Screen::move(pos r, pos c) {
    pos row = r * width;
    cursor = row + c;
    return *this;
}

Screen& Screen::set(char ch) {
    contents[cursor] = ch;
    return *this;
}

Screen& Screen::set(pos r, pos c, char ch) {
    pos row = r * width;
    contents[row+c] = ch;
    return *this;
}

Window_mgr::Window_mgr() {
    Screen s(3, 4, '#');
    screens.push_back(s);
}

inline void Window_mgr::clear(ScreenIndex i) {
    if (i >= screens.size()) {
        return;
    }
    Screen &s = screens[i];
    s.contents = std::string(s.height*s.width, ' ');
}


#endif