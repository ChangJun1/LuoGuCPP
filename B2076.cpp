//https://www.luogu.com.cn/problem/B2076
#include <iostream>

using namespace std;

int main() {
    int h;
    cin >> h;
    double h0 = h, sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += 2 * h0;
        h0 /= 2;
    }
    sum -= h;
    cout << sum << endl << h0 << endl;
    return 0;
}