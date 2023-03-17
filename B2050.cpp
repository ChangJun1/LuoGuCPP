//https://www.luogu.com.cn/problem/B2050
#include <iostream>

using namespace std;

int main() {
    unsigned int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}