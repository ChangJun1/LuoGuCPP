// https://www.luogu.com.cn/problem/P1307
#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    if (N == 0) {
        cout << 0 << endl;
        return 0;
    }
    int res = 0;
    bool isNegative = false;
    if (N < 0) {
        N = -N;
        isNegative = true;
    }
    while (N) {
        res = res * 10 + N % 10;
        N /= 10;
    }
    if (isNegative) {
        res = -res;
    }
    cout << res << endl;
    return 0;
}