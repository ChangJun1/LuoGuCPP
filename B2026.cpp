//https://www.luogu.com.cn/problem/B2026
#include <iostream>

using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    double d = a / b;
    if (d < 1) {
        cout << d << endl;
    } else {
        cout << a - (int) d * b << endl;
    }
    return 0;
}
