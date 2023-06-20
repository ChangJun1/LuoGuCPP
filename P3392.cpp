// https://www.luogu.com.cn/problem/P3392
#include<iostream>
#include <vector>
#include <climits>
#include <cmath>

using namespace std;

int check(char c, string s, int m) {
    int res = 0;
    for (int i = 0; i < m; ++i)
        if (s[i] != c) {
            ++res;
        }
    return res;
}


/*w[i]表示前i行涂成白色所需要的格子数
1到第i行是白色
i+1到第j行是蓝色
j+1到n行是红色
代价为w_i + b_j - b_(i) + r_n - r_(j)
枚举*/

int main() {
    int n, m;
    cin >> n >> m;
    string s;
    vector<int> w(51), r(51), b(51);
    int res = INT_MAX;
    for (int i = 1; i <= n; ++i) {
        cin >> s;
        w[i] = w[i - 1] + check('W', s, m);
        b[i] = b[i - 1] + check('B', s, m);
        r[i] = r[i - 1] + check('R', s, m);
    }
    for (int i = 1; i <= n - 2; ++i) { //最多枚举到n-2行
        for (int j = i + 1; j <= n - 1; ++j) {
            res = min(res, w[i] + b[j] - b[i] + r[n] - r[j]);
        }
    }
    cout << res << endl;
    return 0;
}