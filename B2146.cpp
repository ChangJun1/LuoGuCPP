// https://www.luogu.com.cn/problem/B2146
#include <iostream>

using namespace std;

int hermite(int n, int x) {
    if (n == 0) {
        return 1;
    }
    if (n == 1) {
        return 2 * x;
    }
    return 2 * x * hermite(n - 1, x) - 2 * (n - 1) * hermite(n - 2, x);
}

int main() {
    int n, x;
    cin >> n >> x;
    cout << hermite(n, x) << endl;
    return 0;
}