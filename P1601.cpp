// https://www.luogu.com.cn/problem/P1601
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int flag = 0;
    string res;
    for (int i = a.size() - 1, j = b.size() - 1; i >= 0 || j >= 0; --i, --j) {
        int x = i >= 0 ? a[i] - '0' : 0;
        int y = j >= 0 ? b[j] - '0' : 0;
        int sum = x + y + flag;
        flag = sum / 10;
        sum = sum % 10;
        res += to_string(sum);
    }
    if (flag > 0) {
        res += to_string(flag);
    }
    reverse(res.begin(), res.end());
    cout << res << endl;
    return 0;
}