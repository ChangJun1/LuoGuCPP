//https://www.luogu.com.cn/problem/B2027
#include <iostream>
#include <cmath>
#include <iomanip>

#define PI 3.14

using namespace std;

int main() {
    double r = 0;
    cin >> r;
    double V = 4.0 / 3 * PI * pow(r, 3);
    cout << fixed << setprecision(5) << V << endl;
    return 0;
}
