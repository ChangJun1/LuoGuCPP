// https://www.luogu.com.cn/problem/P1116
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int res = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (a[j] < a[i]) {
                swap(a[j], a[i]);
                res++;
            }
        }
    }
    cout << res << endl;
    return 0;
}