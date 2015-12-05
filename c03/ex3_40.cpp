#include <iostream>
#include <string>
#include <cstring>

using std::cout;
using std::endl;
using std::string;

int main() {
    const char ca1[] = "Hello World! ";
    const char ca2[] = "Happy New Year!";
    const size_t sz = strlen(ca1) + strlen(ca2);
    char ca[sz];
    
    cout << strcat(strcpy(ca, ca1), ca2) << endl;
    
    return 0;
}