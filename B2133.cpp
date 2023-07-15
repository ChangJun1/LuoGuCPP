// https://www.luogu.com.cn/problem/B2133
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1;; i++) {
        for (int j = 1; j <= i; j++) {
            if (i * (i + 1) / 2 - 3 * j == n) {
                cout << j << " " << i << endl;
                return 0;
            }
        }
    }
}