// https://www.luogu.com.cn/problem/B2137
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x, y, count = 0;
    cin >> x >> y;
    if (x > y)
        swap(x, y);
    for (int i = x; i <= y; i++) {
        bool q = true;
        for (int j = 2; j <= sqrt(i); j++)
            if (i % j == 0) {
                q = false;
                break;
            }
        if (q && i != 1) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}