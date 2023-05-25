// https://www.luogu.com.cn/problem/P1563
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<string> b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];
    }
    int index = 0;
    for (int i = 0; i < m; ++i) {
        int x, y;
        cin >> x >> y;
        if (x == 0 && a[index] == 0 || x == 1 && a[index] == 1) {
            index = (index - y + n) % n;
        } else {
            index = (index + y) % n;
        }
    }
    cout << b[index] << endl;
    return 0;
}