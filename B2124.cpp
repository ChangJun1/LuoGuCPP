// https://www.luogu.com.cn/problem/B2125
#include <iostream>
#include <string>

using namespace std;

bool ispPlindrome(const string &s) {
    size_t n = s.size();
    for (size_t i = 0; i < n / 2; ++i) {
        if (s[i] != s[n - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    if (ispPlindrome(s)) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;
}