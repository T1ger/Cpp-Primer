#include <iostream>
#include <string>

using namespace std;
int main() {
    string word, prev_word, tmp_word;
    int cnt = 1, tmp_cnt = 0;
    while (cin >> tmp_word) {
        if (tmp_word == prev_word && ++tmp_cnt > cnt) {
            word = tmp_word;
            cnt = tmp_cnt;
        } else if (tmp_word != prev_word) {
            tmp_cnt = 1;
        }
        prev_word = tmp_word;
    }
    
    if (cnt == 1) cout << "There is no duplicated string." << endl;
    else cout << "The word " << word <<  " occurred " << cnt << " times" << endl;
    
    return 0;
}