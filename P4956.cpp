// https://www.luogu.com.cn/problem/P4956
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int x = 100; x >= 1; --x) {
        for (int k = 1; k <= n / 52; ++k) {
            if (52 * (7 * x + 21 * k) == n) {
                cout << x << endl;
                cout << k;
                return 0;
            }
        }
    }
//    x + 3k = N / 364 = n
//    如果n是3的倍数，由 x=n−3k 得 x 为 3 的倍数，最大为99
    /*if (n <= 103) printf("%d\n%d\n", n - 3, 1);//k可以取到1的情况
    else {//k不能取1
        if (n % 3 == 0) printf("%d\n%d\n", 99, (n - 99) / 3);//分类讨论，直接输出
        if (n % 3 == 1) printf("%d\n%d\n", 100, (n - 100) / 3);
        if (n % 3 == 2) printf("%d\n%d\n", 98, (n - 98) / 3);
    }*/
    return 0;
}