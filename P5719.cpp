// https://www.luogu.com.cn/problem/P5719
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int cntA = 0, cntB = 0, sumA = 0, sumB = 0;
    for (int i = 1; i <= n; ++i) {
        if (i % k == 0) {
            sumA += i;
            cntA++;
        }
    }
    sumB = n * (n + 1) / 2 - sumA;
    cntB = n - cntA;
    double avgA = 0, avgB = 0;
    if (cntA > 0) {
        avgA = sumA * 1.0 / cntA;
    }
    if (cntB > 0) {
        avgB = sumB * 1.0 / cntB;
    }
    cout << setprecision(1) << fixed << avgA << " " << avgB << endl;
    return 0;
}