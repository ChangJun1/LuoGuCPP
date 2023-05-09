// https://www.luogu.com.cn/problem/B2110
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    string s;
    cin >> s;
    unordered_map<char, int> m;
    for (char c: s) {
        m[c]++;
    }
    for (char c: s) {
        if (m[c] == 1) {
            cout << c << endl;
            return 0;
        }
    }
    cout << "no" << endl;
    return 0;
}