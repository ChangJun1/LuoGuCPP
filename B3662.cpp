// https://www.luogu.com.cn/problem/B3662
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n, m, t, x1, y1, x2, y2, res = 0;
    string coordinate;
    cin >> n >> m;
    vector<vector<int> > a(n + 2, vector<int>(m + 2, 0));// 扩充一周,方便直接比较
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> a[i][j];
        }
    }
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        cin >> x1 >> y1 >> x2 >> y2;
        swap(a[x1][y1], a[x2][y2]);
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (a[i][j] > a[i - 1][j] && a[i][j] > a[i + 1][j] && a[i][j] > a[i][j - 1] && a[i][j] > a[i][j + 1]) {
                res++;
                coordinate += to_string(i) + " " + to_string(j) + "\n";
            }
        }
    }
    cout << res << "\n" << coordinate;
    return 0;
}