// https://www.luogu.com.cn/problem/P1598
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int a[26];
    for (int i = 0; i < 26; ++i) {
        a[i] = 0;
    }
    for (int i = 0; i < 4; ++i) {
        getline(cin, s);
        int len = s.length();
        for (int j = 0; j < len; ++j) {
            a[s[j] - 'A']++;
        }
    }
    int max = -1;
    for (int i = 0; i < 26; ++i) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    char b[26][max];

    for (int i = 0; i < 26; ++i) {
        for (int j = 0; j < a[i]; ++j) {
            b[i][j] = '*';
        }
        for (int j = a[i]; j < max; ++j) {
            b[i][j] = ' ';
        }
    }

    for (int j = max - 1; j >= 0; --j) {
        for (int i = 0; i < 26; ++i) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    for (char c = 'A'; c <= 'Z'; c++) {
        cout << c << " ";
    }
    return 0;
}
