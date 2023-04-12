//https://www.luogu.com.cn/problem/B2078
#include <iostream>

using namespace std;

int main() {
    unsigned long long m;
    unsigned int k, count = 0;
    cin >> m >> k;
    while (m) {
        if (m % 10 == 3) {
            count++;
        }
        m /= 10;
    }
    if (count == k) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}