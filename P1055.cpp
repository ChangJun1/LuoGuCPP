// https://www.luogu.com.cn/problem/P1055
#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int count = 1, sum = 0, len = s.length();
    for (int i = 0; i < len; ++i) {
        if (isdigit(s[i]) && count <= 9) {
            sum += (s[i] - '0') * count;
            count++;
        }
    }

    char last = s[len - 1];
    int r = sum % 11; // 0 <= r < 11
    if (r == last - '0' || (r == 10 && last == 'X')) {
        cout << "Right" << endl;
    } else if (r == 10) {
        cout << s.substr(0, len - 1) << "X" << endl;
    } else {
        cout << s.substr(0, len - 1) << r << endl;
    }
    return 0;
}