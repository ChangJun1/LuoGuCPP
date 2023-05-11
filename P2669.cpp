// https://www.luogu.com.cn/problem/P2669
#include <iostream>

using namespace std;

int main() {
    int k;
    cin >> k;
    int coin = 1;
    int res = 0;
    for (int i = 0; i < k; i += coin++) {
        if (i + coin < k) {
            res += coin * coin;
        } else {
            res += coin * (k - i);
        }
    }
    cout << res << endl;
    return 0;
}