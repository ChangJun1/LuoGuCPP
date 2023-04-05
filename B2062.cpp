//https://www.luogu.com.cn/problem/B2062
#include <iostream>

using namespace std;

long long a2thePowerOfn(int a, int n) {
    if (n == 1) {
        return a;
    }
    if (n == 2) {
        return a * a;
    }
    if (n % 2 == 1) {
        long long tmp = a2thePowerOfn(a, (n - 1) / 2);
        return tmp * tmp * a;
    } else {
        long long tmp = a2thePowerOfn(a, n / 2);
        return tmp * tmp;
    }
}

int main() {
    int a, n;
    cin >> a >> n;
    cout << a2thePowerOfn(a, n) << endl;
    return 0;
}