//https://www.luogu.com.cn/problem/B2057
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int max = 0;
    for (int i = 0; i < n; i++) {
        int a_i;
        cin >> a_i;
        if (a_i > max) {
            max = a_i;
        }
    }
    cout << max << endl;
    return 0;
}