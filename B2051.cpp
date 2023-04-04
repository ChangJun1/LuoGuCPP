//https://www.luogu.com.cn/problem/B2051
#include <iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if (x > 1 || x < -1 || y > 1 || y < -1) {
        cout << "no" << endl;
    } else {
        cout << "yes" << endl;
    }
    return 0;
}