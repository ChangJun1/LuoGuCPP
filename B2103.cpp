// https://www.luogu.com.cn/problem/B2103
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    vector<vector<int> > a(m, vector<int>(n)), b(m, vector<int>(n));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }
    int count = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> b[i][j];
            if (a[i][j] == b[i][j]) {
                count++;
            }
        }
    }
    cout << setprecision(2) << fixed << count * 100.0 / (m * n) << endl;
    return 0;
}