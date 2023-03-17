//https://www.luogu.com.cn/problem/B2048
#include <iostream>

using namespace std;

int main() {
    int x;
    char c;
    cin >> x >> c;
    int count = 8;
    if (x > 1000) {
        x -= 1000;
        count += x / 500 * 4;
        if (x % 500 > 0) {
            count += 4;
        }
    }
    if (c == 'y') {
        count += 5;
    }
    cout << count << endl;
    return 0;
}