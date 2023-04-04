//https://www.luogu.com.cn/problem/B2055
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        double a_i;
        cin >> a_i;
        sum += a_i;
    }
    double res = sum / n;
    cout << fixed << setprecision(4) << res << endl;
    return 0;
}