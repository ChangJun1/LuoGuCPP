//https://www.luogu.com.cn/problem/B2084
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    int tmp = ceil(sqrt(n));
    int res = 0;
    for (int i = tmp; i <= n; ++i) {
        if (n % i == 0) {
            res = i;
            break;
        }
    }
    cout << res << endl;
    return 0;
}