// https://www.luogu.com.cn/problem/B3659
#include <iostream>

using namespace std;

int main() {
    int n, k, a, res = 0;
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        if (a == k) {
            res++;
        }
    }
    cout << res << endl;
    return 0;
}