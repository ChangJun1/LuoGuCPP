//https://www.luogu.com.cn/problem/B2041
#include <iostream>

using namespace std;

int main() {
    unsigned int a, b;
    cin >> a >> b;
    if (a >= 10 || b >= 20) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}