// https://www.luogu.com.cn/problem/B2118
#include <iostream>
#include <string>

int main() {
    std::string s1, s2;
    std::cin >> s1 >> s2;
    size_t len_s1 = s1.size(), len_s2 = s2.size();
    if (len_s1 < len_s2) {
        std::string tmp = s1;
        s1 = s2;
        s2 = tmp;
    }
    size_t idx = s1.find(s2);
    if (idx != std::string::npos) {
        std::cout << s2 << " is substring of " << s1 << "\n";
    } else {
        std::cout << "No substring\n";
    }
    return 0;
}