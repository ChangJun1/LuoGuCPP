// https://www.luogu.com.cn/problem/P5710
#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    bool con1 = x % 2 == 0;
    bool con2 = x > 4 && x <= 12;
    if (con1 && con2) {
        cout << 1 << " " << 1 << " " << 0 << " " << 0;
    } else if (con1 || con2) {
        cout << 0 << " " << 1 << " " << 1 << " " << 0;
    } else {
        cout << 0 << " " << 0 << " " << 0 << " " << 1;
    }
    return 0;
}