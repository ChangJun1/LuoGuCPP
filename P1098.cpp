// https://www.luogu.com.cn/problem/P1098
#include <iostream>

using namespace std;

int main() {
    int n, num;
    cin >> n;
    int t = n;
    string res;
    for (int i = 0; i <= n; ++i) {
        cin >> num;
        if (num == 0) {
            t--;
            continue;
        }
        if (i > 0 && num > 0) {
            res += "+";
        }
        string s = to_string(num);
        if (num == 1 && t > 0) {
            s = "";
        }
        if (num == -1 && t > 0) {
            s = "-";
        }
        if (t > 1) {
            res += s + "x^" + to_string(t);
        } else if (t == 1) {
            res += s + "x";
        } else {
            res += s;
        }
        t--;
    }
    cout << res << endl;
    return 0;
}
