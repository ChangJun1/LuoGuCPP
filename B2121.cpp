// https://www.luogu.com.cn/problem/B2121
#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> strSplit(const std::string &s) {
    size_t i = 0, j = 0, n = s.size();
    std::vector<std::string> res;
    while (i < n && j < n) {
        // 多个空格处理
        while (j > 0 && j < n && s[j - 1] == ' ' && s[j] == ' ') {
            j++;
        }
        // 起始位置
        i = j;
        while (j < n && s[j] != ' ' && s[j] != ',' && s[j] != '.') {
            j++;
        }
        res.push_back(s.substr(i, j - i));
        j++;
    }
    return res;
}

int main() {
    std::string s;
    std::getline(std::cin, s);
    size_t n = s.size();
    std::vector<std::string> strArr = strSplit(s);
    std::string shortest = strArr.size() > 0 ? strArr[0] : "";
    std::string longest = strArr.size() > 0 ? strArr[0] : "";

    for (size_t i = 1; i < strArr.size(); ++i) {
        if (strArr[i].size() > longest.size()) {
            longest = strArr[i];
        }
        if (strArr[i].size() < shortest.size()) {
            shortest = strArr[i];
        }
    }
    std::cout << longest << "\n" << shortest;
    return 0;
}