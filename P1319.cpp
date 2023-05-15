// https://www.luogu.com.cn/problem/P1319
#include <iostream>

using namespace std;

int main() {
    int n, x;
    cin >> n;
    int flag = 0, count = 0;
    while (cin >> x) {
        for (int i = 0; i < x; ++i) {
            if (count == n) {
                cout << "\n";
                count = 0;
            }
            count++;
            if (flag == 0) {
                cout << "0";
            } else {
                cout << "1";
            }
        }
        flag = 1 - flag;
    }
    return 0;
}