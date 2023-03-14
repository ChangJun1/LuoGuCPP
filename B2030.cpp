//https://www.luogu.com.cn/problem/B2030
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double xa, ya, xb, yb;
    cin >> xa >> ya >> xb >> yb;
    double res = sqrt((xb - xa) * (xb - xa) + (yb - ya) * (yb - ya));
    cout << fixed << setprecision(3) << res << endl;
    return 0;
}
