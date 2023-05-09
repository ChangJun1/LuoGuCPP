// https://www.luogu.com.cn/problem/B2105
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<int> > a(n, vector<int>(m)), b(m, vector<int>(k)), res(n, vector<int>(k));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < k; j++) {
            cin >> b[i][j];
        }
    }
    std::transform(a.begin(), a.end(), res.begin(),
                   [&](std::vector<int> &row1) {
                       std::vector<int> mul(k);
                       for (int i = 0; i < k; i++) {
                           int sum = 0;
                           for (int j = 0; j < m; j++) {
                               sum += row1[j] * b[j][i];
                           }
                           mul[i] = sum;
                       }
                       return mul;
                   });

    for (std::vector<int> &row: res) {
        for (int num: row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}