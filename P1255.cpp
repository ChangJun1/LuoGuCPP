// https://www.luogu.com.cn/problem/P1255
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string add(const string &s1, const string &s2) {
    int len_s1 = s1.size();
    int len_s2 = s2.size();
    int carry = 0;
    string res;
    for (int i = len_s1 - 1, j = len_s2 - 1; i >= 0 || j >= 0; --i, --j) {
        int a = i >= 0 ? s1[i] - '0' : 0;
        int b = j >= 0 ? s2[j] - '0' : 0;
        int tmp = a + b + carry;
        carry = tmp / 10;
        if (tmp >= 10) {
            tmp = tmp % 10;
        }
        res += tmp + '0';
    }
    if (carry > 0) {
        res += carry + '0';
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<string> a(n + 1, "1");
    for (int i = 2; i <= n; ++i) {
        a[i] = add(a[i - 1], a[i - 2]);
    }
    cout << a[n] << endl;
    return 0;
}
