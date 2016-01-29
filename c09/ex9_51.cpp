#ifndef EX_9_51_H
#define EX_9_51_H

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Date {
private:
    unsigned year;
    unsigned month;
    unsigned day;
public:
    Date(const string& s) {
        unsigned format = 0;
        if (s.find_first_of('/') != string::npos) {
            format = 1;
        }
        if (s.find_first_of(',') != string::npos) {
            format = 2;
        }
        switch (format) {
            case 1:
                month = stoi(s.substr(0, s.find_first_of('/')));
                day = stoi(s.substr(s.find_first_of('/')+1, s.find_last_of('/')));
                year = stoi(s.substr(s.find_last_of('/')+1));
                break;
            case 2:
                if (s.find("Jan") < s.size()) month = 1;
                if (s.find("Feb") < s.size()) month = 2;
                if (s.find("Mar") < s.size()) month = 3;
                if (s.find("Apr") < s.size()) month = 4;
                if (s.find("May") < s.size()) month = 5;
                if (s.find("Jun") < s.size()) month = 6;
                if (s.find("Jul") < s.size()) month = 7;
                if (s.find("Aug") < s.size()) month = 8;
                if (s.find("Sep") < s.size()) month = 9;
                if (s.find("Oct") < s.size()) month = 10;
                if (s.find("Nov") < s.size()) month = 11;
                if (s.find("Dec") < s.size()) month = 12;
                
                day = stoi(s.substr(s.find_first_of("123456789"), s.find_first_of(',')));
                year = stoi(s.substr(s.find_last_of(' ')));
                break;
        }
    }
    
    void print_date() {
        cout << "The date is: " << endl;
        cout << "Year: " << year << ", Month: " << month << ", day: " << day << endl;
    }
};

#endif

int main() {
    Date d1("7/18/1986");
    d1.print_date();
    
    Date d2("July 18, 1986");
    d2.print_date();
    return 0;
}