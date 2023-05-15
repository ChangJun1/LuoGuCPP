// https://www.luogu.com.cn/problem/P1789
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<int> > arr(n, vector<int>(n));
    for (int l = 0; l < m; ++l) {
        int x, y;
        cin >> x >> y;
        for (int j = y - 3; j <= y + 1; ++j) {
            if (j < 0) {
                continue;
            }
            if (j >= n) {
                break;
            }
            if (j == y - 2 || j == y) {
                if (x - 2 >= 0 && x - 2 < n) {
                    arr[x - 2][j] = 1;
                }
                if (x >= 0 && x < n) {
                    arr[x][j] = 1;
                }
            }
            arr[x - 1][j] = 1;
        }
        for (int i = x - 3; i <= x + 1; ++i) {
            if (i < 0) {
                continue;
            }
            if (i >= n) {
                break;
            }
            arr[i][y - 1] = 1;
        }
    }

    for (int l = 0; l < k; ++l) {
        int o, p;
        cin >> o >> p;
        for (int i = o - 3; i <= o + 1; ++i) {
            if (i < 0) {
                continue;
            }
            if (i >= n) {
                break;
            }
            for (int j = p - 3; j <= p + 1; j++) {
                if (j < 0) {
                    continue;
                }
                if (j >= n) {
                    break;
                }
                arr[i][j] = 1;
            }
        }
    }
    int res = 0;
    for (auto &v: arr) {
        for (int &i: v) {
            if (i == 0) {
                ++res;
            }
        }
    }
    cout << res << endl;
    return 0;
}