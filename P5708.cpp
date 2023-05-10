// https://www.luogu.com.cn/problem/P5708
#include<iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double p = (a + b + c) / 2;
    double area = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << setprecision(1) << fixed << area << endl;
    return 0;
}