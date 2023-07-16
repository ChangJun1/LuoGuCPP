// https://www.luogu.com.cn/problem/B2134
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<bool> a(n + 1, true);
    a[0] = false, a[1] = false;
    for (int i = 2; i <= n; i++) {
        if (!a[i]) {
            continue;
        }
        for (int j = 2 * i; j <= n; j += i) {
            a[j] = false;
        }
    }
    for (int i = n / 2; i <= n; i++) {
        if (a[i] && a[n - i]) {
            cout << i * (n - i) << endl;
            return 0;
        }
    }
    return 0;
}