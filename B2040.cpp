//https://www.luogu.com.cn/problem/B2040
#include <iostream>

using namespace std;

int main() {
    unsigned int a;
    cin >> a;
    if (a >= 10 && a < 100) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}