// https://www.luogu.com.cn/problem/B2130
#include <iostream>

using namespace std;

int main() {
    int a, b;
    char c;
    cin >> a >> c >> b;
    switch (c) {
        case '+': {
            cout << a + b << endl;
            break;
        }
        case '-': {
            cout << a - b << endl;
            break;
        }
        case '*': {
            cout << a * b << endl;
            break;
        }
        case '/': {
            if (b == 0) {
                cout << "can not be divided by zero!" << endl;
                break;
            }
            cout << a / b << endl;
            break;
        }
        case '%': {
            if (b == 0) {
                cout << "can not be divided by zero!" << endl;
                break;
            }
            cout << a % b << endl;
            break;
        }
        default:
            break;
    }
    return 0;
}