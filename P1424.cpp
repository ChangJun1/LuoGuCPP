// https://www.luogu.com.cn/problem/P1424
#include <iostream>

using namespace std;

int main() {
    int x, n;
    cin >> x >> n;
    int day = n / 7 * 5;
    int r = n % 7;
    int total = 250 * day;
    if (r > 0) {
        /*
         *        1 2 3 4 5 6
         * x=1    1 2 3 4 5 5
         * x=2    1 2 3 4 4 4
         * x=3    1 2 3 3 3 4
         * x=4    1 2 2 2 3 4
         * x=5    1 1 1 2 3 4
         * x=6    0 0 1 2 3 4
         * x=7    0 1 2 3 4 5
         */
        if (x + r <= 6) {
            total += 250 * r;
        } else if (x + r <= 8) {
            total += 250 * max(6 - x, 0);
        } else if (x + r > 8) {
            total += 250 * (x == 7 ? r - 1 : r - 2);
        }
    }
    cout << total << endl;
    return 0;
}