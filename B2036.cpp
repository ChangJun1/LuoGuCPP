//https://www.luogu.com.cn/problem/B2036
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double n;
    cin >> n;
    double res = abs(n);
    cout << fixed << setprecision(2) << res << endl;
    return 0;
}