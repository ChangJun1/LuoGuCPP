// https://www.luogu.com.cn/problem/B3655
#include <iostream>

using namespace std;

int main() {
    int n, v1, v3, v7, v30, v120, v365, x, tmp = 0, res = 0;
    cin >> n >> v1 >> v3 >> v7 >> v30 >> v120 >> v365;
    for (int i = 1; i <= n; ++i) {
        cin >> x;
        if (x == 1) {
            tmp++;
        } else {
            tmp = 0;
        }
        if (tmp == 0) {
            continue;
        } else if (tmp < 3) {
            res += v1;
        } else if (tmp < 7) {
            res += v3;
        } else if (tmp < 30) {
            res += v7;
        } else if (tmp < 120) {
            res += v30;
        } else if (tmp < 365) {
            res += v120;
        } else {
            res += v365;
        }
    }
    cout << res << endl;
    return 0;
}