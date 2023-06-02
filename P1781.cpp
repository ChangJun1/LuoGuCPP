// https://www.luogu.com.cn/problem/P1781
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool cmp(const string &s1, const string &s2) {
    if (s1.size() == s2.size()) {
        for (size_t i = 0; i < s1.size(); i++) {
            if (s1[i] != s2[i]) {
                return s1[i] > s2[i];
            }
        }
        return false;
    } else {
        return s1.size() > s2.size();
    }
}

int main() {
    int n;
    cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];

    }
    string res = a[0];
    int idx = 1;
    for (int i = 1; i < n; ++i) {
        if (cmp(a[i], res)) {
            res = a[i];
            idx = i + 1;
        }
    }
    cout << idx << endl << res << endl;
    return 0;
}