// https://www.luogu.com.cn/problem/P1597
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    string s;
    cin >> s;
    unordered_map<char, int> m;
    m['a'] = m['b'] = m['c'] = 0;
    for (int i = 0; i < s.size(); i += 5) {
        if (i + 3 < s.size() && s[i + 3] >= '0' && s[i + 3] <= '9') {
            m[s[i]] = s[i + 3] - '0';
        } else {
            m[s[i]] = m[s[i + 3]];
        }
    }
    cout << m['a'] << " " << m['b'] << " " << m['c'] << endl;
    return 0;
}
