// https://www.luogu.com.cn/problem/P1164
#include<iostream>
#include<cstdio>

#define N 110
using namespace std;
int n, m, a[N], f[N][10010];

/*
方程 f[i,j]:=f[i-1,j]+f[i-1,j-a[i]];

数组表示在前i道菜中，总价格为j。

你可以不点这道菜（f[i-1,j]），或者点（f[i-1,j-a[i]]）
*/

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i <= n; i++) {
        f[i][0] = 1;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            f[i][j] += f[i - 1][j];
            if (j >= a[i]) {
                f[i][j] += f[i - 1][j - a[i]];
            }
        }
    }
    cout << f[n][m];
    return 0;
}