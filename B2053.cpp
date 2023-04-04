//https://www.luogu.com.cn/problem/B2053
#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    double delta = b * b - 4 * a * c;
    if (delta < 0) {
        cout << "No answer!" << endl;
    } else if (delta == 0) {
        double x = -b / (2 * a);
        cout << fixed << setprecision(5) << "x1=x2=" << x << endl;
    } else {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        if (x1 > x2) {
            swap(x1, x2);
        }
        cout << fixed << setprecision(5) << "x1=" << x1 << ";x2=" << x2 << endl;
    }
    return 0;
}