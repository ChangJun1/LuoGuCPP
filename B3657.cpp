// https://www.luogu.com.cn/problem/B3657
#include <iostream>

using namespace std;

int main() {
    int x, y, res;
    cin >> x >> y;
    if (x > y) {
        res = 90 * y + 60 * (x - y);
    } else if (x < y) {
        res = 90 * x + 40 * (y - x);
    } else {
        res = 90 * x;
    }
    cout << res << endl;
    return 0;
}