//https://www.luogu.com.cn/problem/B2086
#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int x_a = c / a;
    int count = 0;
    for (int i = 0; i <= x_a; ++i) {
        int j = (c - a * i) / b;
        if (a * i + b * j == c) {
//            cout << a << "x" << i << "+" << b << "x" << j << "=" << c << endl;
            count++;
        }

    }
    cout << count << endl;
    return 0;
}