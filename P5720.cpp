// https://www.luogu.com.cn/problem/P5720
#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    int cnt = 1;
    while (a != 1) {
        a /= 2;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}