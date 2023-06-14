// https://www.luogu.com.cn/problem/B2119
#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;
    if (s.substr(s.size() - 2, 2) == "er" || s.substr(s.size() - 2, 2) == "ly") {
        s = s.substr(0, s.size() - 2);
    } else if (s.substr(s.size() - 3, 3) == "ing") {
        s = s.substr(0, s.size() - 3);
    }
    std::cout << s << std::endl;
    return 0;
}