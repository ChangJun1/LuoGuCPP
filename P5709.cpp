// https://www.luogu.com.cn/problem/P5709
#include <iostream>

using namespace std;

int main() {
    int m, t, s;
    cin >> m >> t >> s;
    if (t == 0) {
        cout << 0 << endl;
        return 0;
    }
    int eat = s / t;
    if (s % t != 0) {
        eat++;
    }
    cout << (m - eat < 0 ? 0 : m - eat) << endl;
    return 0;
}