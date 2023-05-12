// https://www.luogu.com.cn/problem/P1075
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    int sqrt_n = sqrt(n);
    int p = n;
    for (int i = 2; i <= sqrt_n; ++i) {
        if (n % i == 0) {
            p = n / i;
            break;
        }
    }
    cout << p << endl;
    return 0;
}