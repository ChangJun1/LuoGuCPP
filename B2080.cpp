//https://www.luogu.com.cn/problem/B2080
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double x;
    int n;
    cin >> x >> n;
    double res = 0.0;
    if (x == 1.0) {
        res = n * x;
    } else {
        res = (1.0 - pow(x, n + 1)) / (1.0 - x);
    }
    cout << fixed << setprecision(2) << res << endl;
    return 0;
}