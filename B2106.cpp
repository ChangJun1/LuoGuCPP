// https://www.luogu.com.cn/problem/B2106
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int> > a(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    for (int j = 0; j < m; ++j) {
        for (int i = 0; i < n; ++i) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}