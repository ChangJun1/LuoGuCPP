// https://www.luogu.com.cn/problem/B2145
#include <iostream>

using namespace std;

int digit(int n, int k) {
    int res = 0;
    while (k--) {
        res = n % 10;
        n /= 10;
    }
    return res;
}


int main() {
    int n, k;
    cin >> n >> k;
    cout << digit(n, k) << endl;
    return 0;
}