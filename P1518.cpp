// https://www.luogu.com.cn/problem/P1518
#include<bits/stdc++.h>

using namespace std;
char m[12][12];//地图
int f[3], c[3], ans, tdz;//农夫{方向/坐标}，奶牛，秒数，专属值
// 本题是抄的，难点在于将判断永远追不上转化成判断死循环问题
bool zt[160005];//记录专属值是否出现, 判断是否出现死循环
void move(int x, int y, int direction, int role) {//移动函数
    if (direction == 0) { //向上
        if (m[x - 1][y] == '*') { //遇到障碍，转向
            if (role == 0) { // farmer
                f[0] = 1;
            } else {
                c[0] = 1;
            }
        } else if (role == 0) { //未遇到障碍，直接x--
            f[1]--;
        } else {
            c[1]--;
        }
    } else if (direction == 1) {
        if (m[x][y + 1] == '*') {
            if (role == 0) {
                f[0] = 2;
            } else {
                c[0] = 2;
            }
        } else if (role == 0) {
            f[2]++; //y++
        } else {
            c[2]++;
        }
    } else if (direction == 2) {
        if (m[x + 1][y] == '*') {
            if (role == 0) {
                f[0] = 3;
            } else {
                c[0] = 3;
            }
        } else if (role == 0) {
            f[1]++;
        } else {
            c[1]++;
        }
    } else { //direction = 3
        if (m[x][y - 1] == '*') {
            if (role == 0) {
                f[0] = 0;
            } else {
                c[0] = 0;
            }
        } else if (role == 0) {
            f[2]--;
        } else {
            c[2]--;
        }
    }
}

bool pd() { //判断循环终止条件：如果奶牛坐标与农夫坐标相等，则他们重叠，返回false，退出循环
    if (f[1] == c[1] && f[2] == c[2]) {
        return false;
    } else {
        return true;
    }
}

int main() {
    // 扩充地图，最外侧设置为'*'，方便判断障碍物
    for (int i = 0; i <= 11; i++) {
        m[i][0] = '*', m[i][11] = '*';
    }
    for (int i = 1; i <= 11; i++) {
        m[0][i] = '*', m[11][i] = '*';
    }
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cin >> m[i][j];
            if (m[i][j] == 'F') {
                f[1] = i, f[2] = j;
            }
            if (m[i][j] == 'C') {
                c[1] = i, c[2] = j;
            }
        }
    }
    while (pd()) {//模拟每秒
        tdz = f[1] + f[2] * 10 + c[1] * 100 + c[2] * 1000 + f[0] * 10000 + c[0] * 40000; //评估函数
        if (zt[tdz]) {//死循环（回到曾经走过的地方），输出0并结束程序
            cout << 0 << endl;
            return 0;
        }
        zt[tdz] = true;//标记
        move(f[1], f[2], f[0], 0);
        move(c[1], c[2], c[0], 1);//依次移动农夫和奶牛
        ans++;//记录秒数
    }
    cout << ans << endl;//输出
    return 0;
}
