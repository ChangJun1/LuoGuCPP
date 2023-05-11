// https://www.luogu.com.cn/problem/P1720
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    double a[50];
    a[0] = 0;
    a[1] = 1;
    a[2] = 1;
    for (int i = 3; i <= n; ++i) {
        a[i] = a[i - 1] + a[i - 2];
    }
    cout << setprecision(2) << fixed << a[n];
    return 0;
}