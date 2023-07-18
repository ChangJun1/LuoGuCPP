// https://www.luogu.com.cn/problem/B2136
#include <iostream>

using namespace std;

bool isPalindrome(int n) {
    if (n > 10 && n < 100) {
        return n / 10 == n % 10;
    } else if (n > 100 & n < 1000) {
        return n / 100 == n % 10;
    } else if (n > 1000 && n < 10000) {
        return n / 1000 == n % 1000 && n / 100 % 10 == n / 10 % 10;
    }
    return false;
}

int main() {
    int a[10001];
    for (int i = 2; i <= 10000; i++) {
        a[i] = 1;
    }
    for (int i = 2; i <= 10000; i++) {
        if (a[i] == 0) {
            continue;
        }
        for (int j = 2 * i; j <= 10000; j += i) {
            a[j] = 0;
        }
    }
    int n;
    cin >> n;
    int count = 0;
    for (int i = 11; i <= n; i += 2) {
        if (a[i] == 1 && isPalindrome(i)) {
//            cout << i << "\n";
            count++;
        }
    }
    cout << count << endl;
    return 0;
}