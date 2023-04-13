//https://www.luogu.com.cn/problem/B2083
#include <iostream>

using namespace std;

int main() {
    int a, b, f;
    char c;
    cin >> a >> b >> c >> f;
    for (int i = 0; i < a; ++i) {
        cout << c;
        for (int j = 1; j < b - 1; ++j) {
            if (f != 0 || i == 0 || i == a - 1) {
                cout << c;
            } else {
                cout << " ";
            }
        }
        cout << c << endl;
    }
    return 0;
}