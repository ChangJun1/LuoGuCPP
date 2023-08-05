// https://www.luogu.com.cn/problem/B3658
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x, y, res;
    cin >> x >> y;
    res = floor(x * 1.0 / y);
    cout << res << endl;
    return 0;
}