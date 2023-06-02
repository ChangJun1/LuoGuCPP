// https://www.luogu.com.cn/problem/P1152
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> dif(n - 1);
    cin >> a[0];
    for (int i = 1; i < n; ++i) {
        cin >> a[i];
        dif[i - 1] = abs(a[i] - a[i - 1]);
    }
    sort(dif.begin(), dif.end());
    for (int i = 1; i < n; ++i) {
        if (dif[i - 1] != i) {
            cout << "Not jolly" << endl;
            return 0;
        }
    }
    cout << "Jolly" << endl;
    return 0;
}