// https://www.luogu.com.cn/problem/B2144
#include <iostream>

using namespace std;

int akm(int m, int n) {
    if (m == 0) {
        return n + 1;
    } else if (n == 0) {
        return akm(m - 1, 1);
    }
    return akm(m - 1, akm(m, n - 1));
}

int main() {
    int m, n;
    cin >> m >> n;
    cout << akm(m, n) << endl;
    return 0;
}