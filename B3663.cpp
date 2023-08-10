// https://www.luogu.com.cn/problem/B3663
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, target = "luogu";
    int res = 0;
    cin >> s;
    size_t index = s.find(target);
    while (index != string::npos) {
        res++;
        index = s.find(target, index + 1);
    }
    cout << res << endl;
    return 0;
}