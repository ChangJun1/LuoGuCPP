// https://www.luogu.com.cn/problem/B3652
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long a[1000007];
    long long maxn = -1, minn = 1e18 + 1;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        if (a[i] > maxn) {
            maxn = a[i];
        }
        if (a[i] < minn) {
            minn = a[i];
        }
    }
    for (int i = 1; i <= n; ++i) {
        cout << maxn - a[i] << " ";
    }
    cout << "\n";
    for (int i = 1; i <= n; ++i) {
        cout << a[i] - minn << " ";
    }
    return 0;
}