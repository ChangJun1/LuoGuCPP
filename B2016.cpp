//https://www.luogu.com.cn/problem/B2016
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x;
    cin >> x;
    long long res = 0;
    if (x < 0) {
        res = ceil(x);
    }
    if (x > 0) {
        res = floor(x);
    }
    cout << res << endl;
    return 0;
}
