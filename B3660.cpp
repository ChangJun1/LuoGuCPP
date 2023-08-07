// https://www.luogu.com.cn/problem/B3660
#include <iostream>

using namespace std;

int main() {
    int t, n, x;
    cin >> t;
    while (t--) {
        cin >> n;
        bool flag = false;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            if (x == 0) {
                flag = true;
            }
        }
        if (flag) {
            cout << "yes" << "\n";
        } else {
            cout << "no" << "\n";
        }
    }
    return 0;
}