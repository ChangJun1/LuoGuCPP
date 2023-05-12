// https://www.luogu.com.cn/problem/P5725
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << setw(2) << setfill('0') << n * (i - 1) + j;
        }
        cout << endl;
    }

    cout << endl;
    int k = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = n - i; j > 0; --j) {
            cout << "  ";
        }
        for (int j = 1; j <= i; ++j) {
            cout << setw(2) << setfill('0') << k++;
        }
        cout << endl;
    }
    return 0;
}