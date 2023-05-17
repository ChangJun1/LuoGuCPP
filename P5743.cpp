// https://www.luogu.com.cn/problem/P5743
#include <iostream>

using namespace std;

int peachAmount(int n) {
    int res = 1;
    for (int i = 1; i < n; ++i) {
        res = (res + 1) * 2;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    int res = peachAmount(n);
    cout << res << endl;
    return 0;
}