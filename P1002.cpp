// https://www.luogu.com.cn/problem/P1002
#include <iostream>

using namespace std;

// 超时
/*void dfs(int a_x, int a_y, int b_x, int b_y, int h_x, int h_y, unsigned long long &res) {
    // 越界， 只有下和右两个方向
    if (a_x > b_x || a_y > b_y) {
        return;
    }

    // 马脚
    if (a_x == h_x && a_y == h_y ||
        a_x == h_x + 2 && a_y == h_y + 1 ||
        a_x == h_x + 1 && a_y == h_y + 2 ||
        a_x == h_x - 1 && a_y == h_y + 2 ||
        a_x == h_x - 2 && a_y == h_y + 1 ||
        a_x == h_x - 2 && a_y == h_y - 1 ||
        a_x == h_x - 1 && a_y == h_y - 2 ||
        a_x == h_x + 1 && a_y == h_y - 2 ||
        a_x == h_x + 2 && a_y == h_y - 1) {
        return;
    }

    // 终点
    if (a_x == b_x && a_y == b_y) { // 到达终点
        res++;
        return;
    }

    dfs(a_x, a_y + 1, b_x, b_y, h_x, h_y, res);
    dfs(a_x + 1, a_y, b_x, b_y, h_x, h_y, res);

}*/

//本题为dp,状态转移方程为 $ f(i,j) = f(i-1,j) + f(i,j-1) $ 初始f(0,0)=1,递推即可
int main() {
    int b_x, b_y, h_x, h_y;
    cin >> b_x >> b_y >> h_x >> h_y;

    const int fx[] = {0, -2, -1, 1, 2, 2, 1, -1, -2};
    const int fy[] = {0, 1, 2, 2, 1, -1, -2, -2, -1};

    unsigned long long f[32][32];
    bool s[32][32]; //判断这个点有没有马拦住
    //初始化
    for (int i = 0; i < 32; ++i) {
        for (int j = 0; j < 32; ++j) {
            f[i][j] = 0;
            s[i][j] = false;
        }
    }

    //坐标+2以防越界
    // 现在坐标从(2,2)开始
    b_x += 2;
    b_y += 2;
    h_x += 2;
    h_y += 2;

    //初始化，保证f[2][2]=1, f[2][2]= f[2][1] + f[1][2]
    f[1][2] = 0;
    f[2][1] = 1;

    //标记马和马脚的位置
    for (int i = 0; i <= 8; i++) {
        s[h_x + fx[i]][h_y + fy[i]] = true;
    }

    for (int i = 2; i <= b_x; i++) {
        for (int j = 2; j <= b_y; j++) {
            // 如果被马拦住就直接跳过
            if (s[i][j]) {
                // 走不到这个格子上，f[i][j]=0
                continue;
            }
            // 状态转移方程
            f[i][j] = f[i - 1][j] + f[i][j - 1];
        }
    }
    cout << f[b_x][b_y] << endl;
    return 0;
}
