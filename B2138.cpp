// https://www.luogu.com.cn/problem/B2138
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    vector<int> prime;
    vector<bool> a(n + 1, false);
    a[0] = true, a[1] = true;
    for (int i = 2; i <= n; i++) {
        if (!a[i]) {
            prime.push_back(i);
        }
        for (int &x: prime) {
            if (i * x <= n) {
                a[i * x] = true;
            }
            if (i % x == 0) {
                break;
            }
        }
    }
    for (int i = m; i <= n; i++) {
        if (!a[i]) {
            if (i == n) {
                cout << i << "\n";
            } else {
                cout << i << ",";
            }
            continue;
        }
        for (auto it = prime.rbegin(); it != prime.rend(); it++) {
            if (i % (*it) == 0) {
                if (i == n) {
                    cout << *it << "\n";
                } else {
                    cout << *it << ",";
                }
                break;
            }
        }
    }
    return 0;
}