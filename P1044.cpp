// https://www.luogu.com.cn/problem/P1044
#include <iostream>

#define MAX 20
#define ull unsigned long long

using namespace std;

/*
 * i表示操作序列剩余元素个数，j表示栈中剩余元素个数
 * f[i][j]表示分别为i和j时的出栈总数
 * 当i空时，输出唯一确定，即f[0][0...n]=1
 * 当j空时，必须进行push操作，i = i-1
 * 任意时刻只有进栈或出栈一种操作，
 * 当栈不为空时，有递推公式f[i][j] = f[i-1][j+1]（进栈操作）+ f[i][j-1]（出栈操作）
 * 当栈为空时，  有递推公式f[i][j] = f[i-1][j+1]（进栈操作）
 * */

int n;
ull f[MAX][MAX];

ull dfs(int i, int j) {
    if (f[i][j] > 0) {
        return f[i][j];
    }
    if (j > 0) {
        f[i][j] += dfs(i, j - 1);
    }
    f[i][j] += dfs(i - 1, j + 1);
    return f[i][j];
}

int main() {
    cin >> n;
    for (int i = 0; i < MAX; ++i) {
        for (int j = 0; j < MAX; ++j) {
            if (i == 0) {
                f[i][j] = 1;
            } else {
                f[i][j] = 0;
            }
        }
    }
    ull res = dfs(n, 0);
    cout << res << endl;
    return 0;
}
