// https://www.luogu.com.cn/problem/B2147
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double f(int n, double x) {
    double t = sqrt(1 + x);
    for (int i = 2; i <= n; i++) {
        t = sqrt(i + t);
    }
    return t;
}

int main() {
    double x;
    int n;
    cin >> x >> n;
    cout << setprecision(2) << fixed << f(n, x) << endl;
    return 0;
}