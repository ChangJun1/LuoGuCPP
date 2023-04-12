//https://www.luogu.com.cn/problem/B2075
#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int res = 1;
    for (int i = 0; i < b; ++i) {
        res = (res % 1000) * (a % 1000) % 1000;
    }
    if (res < 10) {
        cout << "00" << res << endl;
    } else if (res < 100) {
        cout << "0" << res << endl;
    } else {
        cout << res << endl;
    }
    return 0;
}