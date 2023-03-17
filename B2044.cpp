//https://www.luogu.com.cn/problem/B2044
#include <iostream>

using namespace std;

int main() {
    unsigned int a[3];
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }
    int total = 0;
    for (int i = 0; i < 3; i++) {
        if (a[i] < 60) {
            total++;
        }
    }
    if (total == 1) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}