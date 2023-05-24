// https://www.luogu.com.cn/problem/P1914
#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < s.size(); ++i) {
        s[i] = s[i] + n > 'z' ? (s[i] + n - 26) : s[i] + n;
    }
    cout << s << endl;
    return 0;
}