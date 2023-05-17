// https://www.luogu.com.cn/problem/P5735
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double dis = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    dis += sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
    dis += sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    cout << setprecision(2) << fixed << dis << endl;
    return 0;
}