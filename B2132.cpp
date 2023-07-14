// https://www.luogu.com.cn/problem/B2132
#include <iostream>
#include <vector>

#define MAXN (1e04+7)
using namespace std;

int main() {
    vector<bool> a(MAXN, true);
    a[0] = false, a[1] = false;
    for (int i = 2; i <= 10000; i++) {
        if (!a[i]) {
            continue;
        }
        for (int j = 2 * i; j <= 10000; j += i) {
            a[j] = false;
        }
    }
    int count = 0;
    int n;
    cin >> n;
    for (int i = 3; i <= n - 2; i += 2) {
        if (a[i] && a[i + 2]) {
            cout << i << " " << i + 2 << "\n";
            count++;
        }
    }
    if (count == 0) {
        cout << "empty";
    }
    return 0;
}