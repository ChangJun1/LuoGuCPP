// https://www.luogu.com.cn/problem/P3654
#include<iostream>
#include <vector>

using namespace std;

int main() {
    int r, c, k;
    cin >> r >> c >> k;
    vector<vector<char> > a(r, vector<char>(c));
    int res = 0;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c - k + 1; ++j) {
            int l = j;
            for (; l < j + k; ++l) {
                if (a[i][l] != '.') {
                    break;
                }
            }
            if (l == j + k) {
                res++;
            } else {
                j = l;
            }
        }
    }

    for (int j = 0; j < c; ++j) {
        for (int i = 0; i < r - k + 1; ++i) {
            int l = i;
            for (; l < i + k; ++l) {
                if (a[l][j] != '.') {
                    break;
                }
            }
            if (l == i + k) {
                res++;
            } else {
                i = l;
            }
        }
    }
    // k = 1 时有重复计算
    if (k == 1) {
        res = res / 2;
    }
    cout << res << endl;
    return 0;
}