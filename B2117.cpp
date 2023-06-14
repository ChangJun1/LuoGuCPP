// https://www.luogu.com.cn/problem/B2117
#include <iostream>
#include <string>

void firstUpperAndLeftLower(std::string &s) {
    if (s.empty()) {
        return;
    }
    if (s[0] >= 'a' && s[0] <= 'z') {
        s[0] = std::toupper(s[0]);
    }
    for (int i = 1; i < s.size(); ++i) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = std::tolower(s[i]);
        }
    }
}

int main() {
    int n;
    std::string s;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> s;
        firstUpperAndLeftLower(s);
        std::cout << s << "\n";
    }
    return 0;
}