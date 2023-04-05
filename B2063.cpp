//https://www.luogu.com.cn/problem/B2063
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int x, n;
    cin >> x >> n;
    double ans = x * pow(1.001, n);
    cout << fixed << setprecision(4) << ans << endl;
    return 0;
}
