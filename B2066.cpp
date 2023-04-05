//https://www.luogu.com.cn/problem/B2066
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    double total = 0;
    for (int i = 0; i < n; ++i) {
        double x, y;
        int count;
        cin >> x >> y >> count;
        total += sqrt(x * x + y * y) / 50 * 2 + 1.5 * count;
    }
    int res = int(ceil(total));
    cout << res << endl;
    return 0;
}
