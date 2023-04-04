//https://www.luogu.com.cn/problem/B2056
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        int a_i;
        cin >> a_i;
        sum += a_i;
    }
    double res = sum * 1.0 / n;
    cout << sum << " ";
    cout << fixed << setprecision(5) << res << endl;
    return 0;
}