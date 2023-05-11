// https://www.luogu.com.cn/problem/P5723
#include <iostream>
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
    int L;
    cin >> L;
    if (L == 1) {
        cout << 0 << endl;
        return 0;
    }
    int sum = 0, cnt = 0, i = 2;
    while (true) {
        if (isPrime(i)) {
            sum += i;
            if (sum > L) {
                break;
            }
            cnt++;
            cout << i << "\n";
        }
        i++;
    }
    cout << cnt << endl;
    return 0;
}