// https://www.luogu.com.cn/problem/B2115
#include <iostream>
#include <string>

int main() {
    std::string s, res;
    std::getline(std::cin, s);
    size_t n = s.size();
    for (size_t i = 0; i < n; ++i) {
        if (s[i] > 'a' && s[i] <= 'z' || s[i] > 'A' && s[i] <= 'Z') {
            res += s[i] - 1;
        } else if (s[i] == 'a') {
            res += 'z';
        } else if (s[i] == 'A') {
            res += 'Z';
        } else {
            res += s[i];
        }
    }
    std::cout << res << std::endl;
    return 0;
}