// https://www.luogu.com.cn/problem/B3650
#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long res;
    for (long long i = 1; i <= n; ++i) {
        res = i * (i + 1) / 2;
        cout << res << "\n";
    }
    return 0;
}