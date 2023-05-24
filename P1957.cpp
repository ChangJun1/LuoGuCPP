// https://www.luogu.com.cn/problem/P1957
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int digitCount(int n) {
    if (n == 0) {
        return 1;
    }
    int count = 0;
    while (n) {
        count++;
        n /= 10;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    char c;
    string res;
    for (int i = 0; i < n; ++i) {
        string s;
        int x, y;
        cin >> s;
        if (isalpha(s[0])) {
            c = s[0];
            cin >> x >> y;
        } else {
            x = stoi(s);
            cin >> y;
        }
        switch (c) {
            case 'a': {
                cout << x << "+" << y << "=" << x + y << "\n";
                res = to_string(x + y);
                break;
            }
            case 'b': {
                cout << x << "-" << y << "=" << x - y << "\n";
                res = to_string(x - y);
                break;
            }
            case 'c': {
                cout << x << "*" << y << "=" << x * y << "\n";
                res = to_string(x * y);
                break;
            }
            default:
                break;
        }
        cout << digitCount(x) + digitCount(y) + 2 + res.size() << endl;
    }
    return 0;
}