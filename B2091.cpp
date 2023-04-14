//https://www.luogu.com.cn/problem/B2091
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    int sumOfProduct = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
        sumOfProduct += a[i] * b[i];
    }
    cout << sumOfProduct << endl;
    return 0;
}