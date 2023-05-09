// https://www.luogu.com.cn/problem/B2104
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    vector<vector<int> > a(m, vector<int>(n)), b(m, vector<int>(n)), res(m, vector<int>(n));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> b[i][j];
        }
    }
    std::transform(a.begin(), a.end(), b.begin(), res.begin(),
                   [](std::vector<int> &row1, std::vector<int> &row2) {
                       std::vector<int> row(row1.size());
                       std::transform(row1.begin(), row1.end(), row2.begin(), row.begin(),
                                      [](int x, int y) { return x + y; });
                       return row;
                   });

    std::for_each(res.begin(), res.end(), [](std::vector<int> resRow) {
        std::for_each(resRow.begin(), resRow.end(), [](int x) {
            cout << x << " ";
        });
        cout << endl;
    });
    return 0;
}