#include <map>
#include <set>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    multimap<string, string> mm{{"Yong Jin", "Xue Shan Fei Hu"}, {"Yong Jin", "She Diao Ying Xiong Zhuan"}, {"Long Gu", "Xiao Li Fei Dao"}};
    std::map<string, std::multiset<string>> order_authors;
    for (const auto &author : mm)
        order_authors[author.first].insert(author.second);
    for (const auto &author : order_authors) {
        std::cout << author.first << ": ";
        for (const auto &work : author.second)
            std::cout << work << "，";
        std::cout << std::endl;
    }
}