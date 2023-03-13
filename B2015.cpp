//https://www.luogu.com.cn/problem/B2015
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double r1, r2;
    cin >> r1 >> r2;
    double R = r1 * r2 / (r1 + r2);
    cout << setprecision(2) << fixed << R << endl;
    return 0;
}
