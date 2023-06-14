// https://www.luogu.com.cn/problem/B2113
#include <iostream>
#include <string>

int main() {
    std::string s, res;
    std::cin >> s;
    size_t n = s.size();
    for (size_t i = 0; i < n - 1; ++i) {
        res += s[i] + s[i + 1];
    }
    res += s[n - 1] + s[0];
    std::cout << res << std::endl;
    return 0;
}