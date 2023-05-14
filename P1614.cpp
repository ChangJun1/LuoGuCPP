// https://www.luogu.com.cn/problem/P1614
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < m; ++i) {
        cin >> a[i];
        sum += a[i];
    }
    int minSum = sum;
    for (int i = m; i < n; ++i) {
        cin >> a[i];
        sum = sum + a[i] - a[i - m];
        minSum = min(minSum, sum);
    }
    cout << minSum << endl;
    return 0;
}