// https://www.luogu.com.cn/problem/B2101
#include <iostream>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    long long sum = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            int tmp;
            cin >> tmp;
            if (i == 0 || j == 0 || i == m - 1 || j == n - 1) {
                sum += tmp;
            }
        }
    }
    cout << sum << endl;
    return 0;
}