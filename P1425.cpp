// https://www.luogu.com.cn/problem/P1425
#include<iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (d >= b) {
        cout << c - a << " " << d - b << endl;
    } else {
        cout << c - a - 1 << " " << 60 + d - b << endl;
    }
    return 0;
}