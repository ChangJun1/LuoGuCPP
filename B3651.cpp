// https://www.luogu.com.cn/problem/B3651
#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    long long sum = 0;
    int x;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (i == k) {
            sum -= x;
        } else {
            sum += x;
        }
    }
    cout << sum << endl;
    return 0;
}