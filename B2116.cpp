// https://www.luogu.com.cn/problem/B2116
#include <iostream>
#include <string>

void shiftStr(std::string &s, int n) {
    for (int i = 0; i < n; ++i) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = 'a' + ((s[i] - 'a' + 3) % 26);
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = 'A' + ((s[i] - 'A' + 3) % 26);
        }
    }
}

void reverseStr(std::string &s, int n) {
    for (int i = 0; i < n / 2; ++i) {
        char tmp = s[i];
        s[i] = s[n - 1 - i];
        s[n - 1 - i] = tmp;
    }
}

void reverseUpperAndLower(std::string &s, int n) {
    for (int i = 0; i < n; ++i) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + ('a' - 'A');
        }
    }
}

int main() {
    std::string s;
    std::cin >> s;
    int n = s.size();
    reverseUpperAndLower(s, n);
    reverseStr(s, n);
    shiftStr(s, n);
    std::cout << s << std::endl;
    return 0;
}