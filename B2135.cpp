// https://www.luogu.com.cn/problem/B2135
#include <iostream>

using namespace std;

int main() {
    string s, a, b, res;
    getline(cin, s);
    cin >> a >> b;
    size_t index = s.find(a);
    size_t tmp = -a.size();
    while (index != string::npos) {
        res += s.substr(tmp + a.size(), index - (tmp + a.size()));
        res += b;
        tmp = index;
        index = s.find(a, index + a.size());
    }
    res += s.substr(tmp + a.size(), s.size() - (tmp + a.size()));
    cout << res << endl;
    return 0;
}