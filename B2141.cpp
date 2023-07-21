// https://www.luogu.com.cn/problem/B2141
#include <iostream>
#include <cmath>

using namespace std;

int maxElement(int n) {
    int res = -1;
    while (n) {
        int tmp = n % 10;
        if (tmp > res) {
            res = tmp;
        }
        n /= 10;
    }
    return res;
}

long long to10(int base, int n) {
    long long res = 0;
    int e = 0;
    while (n) {
        res += pow(base, e) * (n % 10);
        e++;
        n /= 10;
    }
    return res;
}

int main() {
    int p, q, r;
    cin >> p >> q >> r;
    int start = max(maxElement(p), max(maxElement(q), maxElement(r))) + 1;
    for (int i = start; i <= 16; i++) {
        if (to10(i, p) * to10(i, q) == to10(i, r)) {
            cout << i << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}