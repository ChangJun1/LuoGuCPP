// https://www.luogu.com.cn/problem/P1980
#include <iostream>

using namespace std;

int count(int n, int x) {
    int res = 0;
    while (n) {
        if (n % 10 == x) {
            res++;
        }
        n /= 10;
    }
    return res;
}

int main() {
    int n, x;
    cin >> n >> x;
    int total = 0;
    for (int i = 1; i <= n; ++i) {
        total += count(i, x);
    }
    cout << total << endl;
    return 0;
}