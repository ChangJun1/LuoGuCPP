//https://www.luogu.com.cn/problem/B2079
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    double e = 1.0, f = 1.0;
    for (int i = 1; i <= n; ++i) {
        f *= 1.0 / i;
        e += f;
    }
    cout << fixed << setprecision(10) << e << endl;
    return 0;
}
