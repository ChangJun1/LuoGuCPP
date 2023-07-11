// https://www.luogu.com.cn/problem/B2129
#include <iostream>
#include <iomanip>

using namespace std;

int max(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    }
    if (b >= a && b >= c) {
        return b;
    }
    return c;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    double m = max(a, b, c) * 1.0 / (max(a + b, b, c) * max(a, b, b + c));
    cout << fixed << setprecision(3) << m << endl;
    return 0;
}