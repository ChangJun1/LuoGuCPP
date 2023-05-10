// https://www.luogu.com.cn/problem/P4414
#include <iostream>

using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    int A = min(min(x, y), z);
    int C = max(max(x, y), z);
    int B = x ^ y ^ z ^ A ^ C;
    string s;
    cin >> s;
    for (int i = 0; i < 3; ++i) {
        switch (s[i]) {
            case 'A':
                cout << A << " ";
                break;
            case 'B':
                cout << B << " ";
                break;
            case 'C':
                cout << C << " ";
                break;
        }
    }
    return 0;
}