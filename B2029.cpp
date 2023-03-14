//https://www.luogu.com.cn/problem/B2029
#include <iostream>
#include <cmath>

#define PI 3.14

using namespace std;

int main() {
    int h, r;
    cin >> h >> r;
    double v = PI * r * r * h / 1000;
    int res = ceil(20 / v);
    cout << res << endl;
    return 0;
}
