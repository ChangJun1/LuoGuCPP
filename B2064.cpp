//https://www.luogu.com.cn/problem/B2064
#include <iostream>
#include <climits>

using namespace std;

int *fib(int n) {
    int *res = new int[n + 1];
    res[0] = 0;
    if (n <= 2) {
        for (int i = 1; i <= n; ++i) {
            res[i] = 1;
        }
        return res;
    }
    res[1] = res[2] = 1;
    for (int i = 3; i <= n; i++) {
        res[i] = res[i - 1] + res[i - 2];
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    int *a = new int[n];
    int max = INT_MIN;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] > max) {
            max = a[i];
        }
    }
    int *fibArr = fib(max);
    for (int i = 0; i < n; ++i) {
        cout << fibArr[a[i]] << endl;
    }
    return 0;
}
