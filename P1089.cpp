// https://www.luogu.com.cn/problem/P1089
#include <iostream>

using namespace std;

int main() {
    int remain = 0;
    int save = 0;
    int a[12];
    for (int i = 0; i < 12; ++i) {
        cin >> a[i];
        remain += 300;
        if (remain < a[i]) {
            cout << -(i + 1) << endl;
            return 0;
        }
        remain -= a[i];
        if (remain >= 100) {
            int r = remain / 100;
            save += r * 100;
            remain -= r * 100;
        }
    }
    cout << remain + save * 1.2 << endl;
    return 0;
}