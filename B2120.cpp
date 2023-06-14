// https://www.luogu.com.cn/problem/B2120
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
        while (j < n && s[j] != ' ') {
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
    std::vector<std::string> strArr = strSplit(s);
    for (size_t i = 0; i < strArr.size() - 1; ++i) {
        std::cout << strArr[i].size() << ",";
    }
    std::cout << strArr[strArr.size() - 1].size() << "\n";
    return 0;
}