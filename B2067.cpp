//https://www.luogu.com.cn/problem/B2067
#include <iostream>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int count = 0;
    for (int i = 0; i < n; ++i) {
        int take;
        cin >> take;
        if (m >= take) {
            m -= take;
        } else {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
