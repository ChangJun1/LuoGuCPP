// https://www.luogu.com.cn/problem/B2108
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int> > a(n, vector<int>(m)), res(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    copy(a.begin(), a.end(), res.begin());
    for (int i = 1; i < n - 1; ++i) {
        for (int j = 1; j < m - 1; ++j) {
            res[i][j] = (int) round((a[i - 1][j] + a[i + 1][j] + a[i][j - 1] + a[i][j + 1] + a[i][j]) / 5.0);
        }
    }
    for (const auto &row: res) {
        for (auto num: row) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}