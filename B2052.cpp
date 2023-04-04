//https://www.luogu.com.cn/problem/B2052
#include <iostream>

using namespace std;

int main() {
    int lhs, rhs;
    char op;
    cin >> lhs >> rhs >> op;
    switch (op) {
        case '+':
            cout << lhs + rhs << endl;
            break;
        case '-':
            cout << lhs - rhs << endl;
            break;
        case '*':
            cout << lhs * rhs << endl;
            break;
        case '/':
            if (rhs == 0) {
                cout << "Divided by zero!" << endl;
            } else {
                cout << lhs / rhs << endl;
            }
            break;
        default:
            cout << "Invalid operator!" << endl;
            break;
    }
    return 0;
}