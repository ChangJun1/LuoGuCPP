// https://www.luogu.com.cn/problem/P1304
#include <iostream>
#include <vector>

const int MAXN = 10001;

using namespace std;

int main() {
    vector<bool> isPrime(MAXN, true);
    for (int i = 2; i < MAXN; ++i) {
        if (isPrime[i]) {
            for (int j = 2 * i; j < MAXN; j += i) {
                isPrime[j] = false;
            }
        }
    }
    int N;
    cin >> N;
    cout << "4=2+2" << endl;
    for (int i = 6; i <= N; i += 2) {
        for (int j = 3; j <= i / 2; j += 2) {
            if (isPrime[j] && isPrime[i - j]) {
                cout << i << "=" << j << "+" << i - j << endl;
                break;
            }
        }
    }
    return 0;
}