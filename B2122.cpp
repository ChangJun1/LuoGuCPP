// https://www.luogu.com.cn/problem/B2122
#include <iostream>
#include <string>

using namespace std;

string reverseStr(string &s) {
    if (s.empty() || s.size() == 1) {
        return s;
    }
    size_t n = s.size();
    for (size_t i = 0; i < n / 2; ++i) {
        char tmp = s[i];
        s[i] = s[n - 1 - i];
        s[n - 1 - i] = tmp;
    }
    return s;
}

void splitStr(const string &s) {
    // 仅包含小写字母和空格，不存在多余的空格
    size_t n = s.size();
    size_t i = 0, j = 0;
    while (i < n && j < n) {
        while (s[j] != ' ' && s[j] != '\0') {
            j++;
        }
        string tmp = s.substr(i, j - i);
        cout << reverseStr(tmp) << "\n";
        j++;
        i = j;
    }
}

int main() {
    string s;
    while (cin >> s) {
        splitStr(s);
    }
    return 0;
}