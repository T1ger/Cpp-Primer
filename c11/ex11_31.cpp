#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    multimap<string, string> mm{{"Yong Jin", "Xue Shan Fei Hu"}, {"Yong Jin", "She Diao Ying Xiong Zhuan"}, {"Long Gu", "Xiao Li Fei Dao"}};
    auto it = mm.find("Gu Long");
    while (it != mm.end()) {
        mm.erase(it);
        it = mm.find("Gu Long");
    }
    for (auto iter = mm.begin(); iter != mm.end(); ++iter) {
        cout << iter->first << " - " << iter->second << endl;
    }
    
    return 0;
}