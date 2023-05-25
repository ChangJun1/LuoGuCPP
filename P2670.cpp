// https://www.luogu.com.cn/problem/P2670
#include <iostream>
#include <vector>

using namespace std;

bool isValid(int i, int j, int n, int m) {
    if (i >= 0 && i < n && j >= 0 && j < m) {
        return true;
    }
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char> > a(n, vector<char>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    vector<vector<char> > res(n, vector<char>(m, '0'));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (a[i][j] == '*') {
                res[i][j] = '*';
                continue;
            }
            if (isValid(i - 1, j - 1, n, m)) {
                if (a[i - 1][j - 1] == '*') {
                    res[i][j] += 1;
                }
            }
            if (isValid(i - 1, j, n, m)) {
                if (a[i - 1][j] == '*') {
                    res[i][j] += 1;
                }
            }
            if (isValid(i - 1, j + 1, n, m)) {
                if (a[i - 1][j + 1] == '*') {
                    res[i][j] += 1;
                }
            }
            if (isValid(i + 1, j - 1, n, m)) {
                if (a[i + 1][j - 1] == '*') {
                    res[i][j] += 1;
                }
            }
            if (isValid(i + 1, j, n, m)) {
                if (a[i + 1][j] == '*') {
                    res[i][j] += 1;
                }
            }
            if (isValid(i + 1, j + 1, n, m)) {
                if (a[i + 1][j + 1] == '*') {
                    res[i][j] += 1;
                }
            }
            if (isValid(i, j - 1, n, m)) {
                if (a[i][j - 1] == '*') {
                    res[i][j] += 1;
                }
            }
            if (isValid(i, j + 1, n, m)) {
                if (a[i][j + 1] == '*') {
                    res[i][j] += 1;
                }
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << res[i][j];
        }
        cout << endl;
    }
    return 0;
}