// https://www.luogu.com.cn/problem/P5733
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        s[i] = toupper(s[i]);
    }
    cout << s << endl;
    return 0;
}