// https://www.luogu.com.cn/problem/B2139
#include <iostream>
#include <string>

using namespace std;

int reverseNum(int n) {
    if (n > 0 && n < 10) {
        return n;
    }
    int res = 0;
    while (n > 0) {
        res = 10 * res + n % 10;
        n /= 10;
    }
    return res;
}

bool isPrime(int n) {
    if (n == 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int m, n;
    cin >> m >> n;
    string res;
    bool flag;
    for (int i = m; i <= n; i++) {
        if (isPrime(i) && isPrime(reverseNum(i))) {
            res += to_string(i) + ",";
            flag = true;
        }
    }
    if (!flag) {
        cout << "No" << endl;
    } else {
        cout << res.substr(0, res.size() - 1) << endl;
    }
    return 0;
}