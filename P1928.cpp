// https://www.luogu.com.cn/problem/P1928
#include<iostream>
#include <string>

using namespace std;

string read() {
    int n;
    char ch;
    string s, s1;
    while (cin >> ch) {
        if (ch == '[') {
            cin >> n;
            s1 = read();
            for (int i = 0; i < n; ++i) {
                s += s1;
            }
        } else if (ch == ']') {
            return s;
        } else {
            s += ch;
        }
    }
}

int main() {
    cout << read() << endl;
    return 0;
}
