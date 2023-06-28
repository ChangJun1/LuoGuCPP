// https://www.luogu.com.cn/problem/P1028
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> f(n + 1);
    f[0] = 1, f[1] = 1;
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j <= i / 2; j++) {
            f[i] += f[j];
        }
    }
    cout << f[n] << endl;
    return 0;
}