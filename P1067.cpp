// https://www.luogu.com.cn/problem/P1067
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int p1, p2, p3;
    cin >> p1 >> p2 >> p3;
    string s, res;
    cin >> s;
    size_t len = s.length();
    for (size_t i = 0; i < len; i++) {
        if (s[i] != '-') {
            res += s[i];
            continue;
        } else if (i - 1 >= 0 && i + 1 < len && (isalpha(s[i - 1]) && isalpha(s[i + 1]) ||
                                                 isdigit(s[i - 1]) && isdigit(s[i + 1]))) {
            int n = s[i + 1] - s[i - 1];
            if (n <= 0) {
                res += s[i];
                continue;
            }
            string tmp;
            if (p1 == 3) {
                tmp = string(p2 * (n - 1), '*');
                res += tmp;
                continue;
            }
            char t = s[i - 1];
            if (p1 == 2 && isalpha(s[i - 1])) {
                t = toupper(t);
            }
            for (int j = 1; j < n; ++j) {
                tmp += string(p2, t + j);
            }
            if (p3 == 2) {
                reverse(tmp.begin(), tmp.end());
            }
            res += tmp;
        } else {
            res += s[i];
        }
    }
    cout << res << endl;
    return 0;
}
