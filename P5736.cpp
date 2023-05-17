// https://www.luogu.com.cn/problem/P5736
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= (int) sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (!isPrime(a[i])) {
            a[i] = 0;
        }
    }
    for (int i = 0; i < n; ++i) {
        if (a[i] > 0) {
            cout << a[i] << " ";
        }
    }
    return 0;
}