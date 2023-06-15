// https://www.luogu.com.cn/problem/P2241
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    unsigned int n, m;
    cin >> n >> m;
    /*矩形数=正方形数+长方形数
    固定正方形的右下角(i,j),正方形的个数为Min(i,j) // 可画图枚举右下角
    固定矩形右下角(i,j),显然此时矩形个数为i*j*/
    unsigned long long rectangle = 0, square = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            square += min(i, j);
            rectangle += i * j;
        }
    }
    cout << square << " " << rectangle - square << endl;
    return 0;
}