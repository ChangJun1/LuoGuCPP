// https://www.luogu.com.cn/problem/P1149
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
//    因为1 <= n <= 24, +和=号各占用两个字符，所以留给数字的只有20个
//    理论上可达到11111111，但因为数据弱四位就过了
    int a[2001] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    for (int i = 10; i <= 2000; i++) {
        a[i] = a[i / 10] + a[i % 10];
    }

    int res = 0;

    for (int i = 0; i <= 1000; ++i) {
        for (int j = 0; j <= 1000; ++j) {
            if (a[i] + a[j] + a[i + j] + 4 == n) {
                res++;
            }
        }
    }

    cout << res << endl;
    return 0;
}