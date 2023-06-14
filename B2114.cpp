// https://www.luogu.com.cn/problem/B2114
#include <iostream>
#include <string>

int main() {
    std::string s, res;
    std::cin >> s;
    size_t n = s.size();
    for (size_t i = 0; i < n; ++i) {
        switch (s[i]) {
            case 'A':
                res += 'T';
                break;
            case 'T':
                res += 'A';
                break;
            case 'C':
                res += 'G';
                break;
            case 'G':
                res += 'C';
                break;
        }
    }
    std::cout << res << std::endl;
    return 0;
}