//https://www.luogu.com.cn/problem/B2059
#include <iostream>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int sum = 0;
    for (int i = m; i <= n; i++) {
        if (i & 1) {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}