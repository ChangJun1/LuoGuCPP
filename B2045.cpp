//https://www.luogu.com.cn/problem/B2045
#include <iostream>

using namespace std;

int main() {
    unsigned int a;
    cin >> a;
    switch (a) {
        case 1:
        case 3:
        case 5:
            cout << "NO" << endl;
            break;
        case 2:
        case 4:
        case 6:
        case 7:
            cout << "YES" << endl;
            break;
        default:
            cout << "invalid weekday!" << endl;
            break;
    }
    return 0;
}