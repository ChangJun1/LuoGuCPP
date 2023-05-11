// https://www.luogu.com.cn/problem/P1035
#include <iostream>

using namespace std;

int main() {
    int k;
    cin >> k;
    double s = 1.0;
    int i = 1;
    while (s <= k) {
        i++;
        s += 1.0 / i;
    }
    cout << i << endl;
    return 0;
}