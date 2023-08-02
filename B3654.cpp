// https://www.luogu.com.cn/problem/B3654
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    string s, res;
    unordered_map<string, bool> m;
    while (cin >> s && s != "0") {
        if (!m[s]) {
            res += s;
            m[s] = true;
        }
    }
    cout << res << endl;
    return 0;
}