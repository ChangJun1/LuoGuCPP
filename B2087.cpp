//https://www.luogu.com.cn/problem/B2087
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int m;
    cin >> m;
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] == m) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}