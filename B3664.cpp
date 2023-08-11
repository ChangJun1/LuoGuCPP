// https://www.luogu.com.cn/problem/B3664
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, res = -1, tmp;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 1; ++i) {
        tmp = a[i + 1] - a[i];
        if (tmp > res) {
            res = tmp;
        }
    }
    cout << res << endl;
    return 0;
}