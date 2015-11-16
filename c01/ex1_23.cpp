#include <iostream>
#include "Sales_item.h"

using namespace std;
int main() {
    Sales_item curr;
    
    if (cin >> curr) {
        Sales_item next;
        int count = 1;
        
        while (cin >> next) {
            if (curr.isbn() == next.isbn()) {
                ++count;
            } else {
                cout << curr << " occurs " << count << " times" << endl;
                curr = next;
                count = 1;
            }
        }
        cout << curr << " occurs " << count << " times" << endl;
    } else {
        cerr << "No data" << endl;
        return -1;
    }
    
    return 0;
}