//https://www.luogu.com.cn/problem/B2038
#include <iostream>

using namespace std;

int main() {
    char a;
    cin >> a;
    if ((int) a & 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}