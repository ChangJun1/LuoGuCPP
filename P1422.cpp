// https://www.luogu.com.cn/problem/P1422
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int x;
    cin >> x;
    double fee = 0;
    if (x <= 150) {
        fee = 0.4463 * x;
    } else if (x > 150 && x <= 400) {
        fee = 0.4463 * 150 + (x - 150) * 0.4663;
    } else if (x > 400) {
        fee = 0.4463 * 150 + (400 - 150) * 0.4663 + (x - 400) * 0.5663;
    }
    cout << setprecision(1) << fixed << fee << endl;
    return 0;
}