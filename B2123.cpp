// https://www.luogu.com.cn/problem/B2123
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, res;
    cin >> s;
    size_t i = 0, n = s.size();
    while (i < n) {
        int count = 1;
        while (i + 1 < n && s[i] == s[i + 1]) {
            count++;
            i++;
        }
        res += to_string(count) + s[i];
        i++;
    }
    cout << res << endl;
    return 0;
}