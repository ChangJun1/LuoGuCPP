//https://www.luogu.com.cn/problem/B2077
#include <iostream>

using namespace std;

int main() {
    unsigned long long n;
    cin >> n;
    while (n != 1) {
        if (n & 1) {
            cout << n << "*3+1=";
            n = 3 * n + 1;
        } else {
            cout << n << "/2=";
            n /= 2;
        }
        cout << n << endl;
    }
    cout << "End" << endl;
    return 0;
}