// https://www.luogu.com.cn/problem/B3653
#include <iostream>
#include <algorithm>

using namespace std;

int n, m;
long long b[51][51];
int ans[51][51] = {0};

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> b[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            for (int x = 1; x <= n; x++) {
                for (int y = 1; y <= m; y++) {
                    if (b[i][j] == b[x][y]) {
                        ans[i][j] = max(ans[i][j], (i - x) * (i - x) + (j - y) * (j - y));
                    }
                }
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}