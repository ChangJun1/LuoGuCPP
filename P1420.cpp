// https://www.luogu.com.cn/problem/P1420
#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }
    int count = 1, maxCount = 1;
    int a[n];
    cin >> a[0];
    for (int i = 1; i < n; ++i) {
        cin >> a[i];
        if (a[i] == a[i - 1] + 1) {
            count++;
        } else {
            maxCount = max(maxCount, count);
            count = 1;
        }
    }
    maxCount = max(maxCount, count);
    cout << maxCount << endl;
    return 0;
}