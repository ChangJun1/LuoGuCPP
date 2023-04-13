//https://www.luogu.com.cn/problem/B2082
#include <iostream>

using namespace std;

int main() {
    unsigned int L, R, count = 0;
    cin >> L >> R;
    for (unsigned int i = L; i <= R; ++i) {
        if (i % 10 == 2) {
            count++;
        }
        if (i / 10 % 10 == 2) {
            count++;
        }
        if (i / 100 % 10 == 2) {
            count++;
        }
        if (i / 1000 % 10 == 2) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}