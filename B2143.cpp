// https://www.luogu.com.cn/problem/B2143
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string itoa(int n) {
    if (n > 0 && n < 10) {
        return to_string(n);
    }
    switch (n) {
        case 10:
            return "A";
        case 11:
            return "B";
        case 12:
            return "C";
        case 13:
            return "D";
        case 14:
            return "E";
        case 15:
            return "F";
        default:
            return "0";
    }
}

// 题目要求用递归
string convert2MbaseNum(int base, long long x) {
    string res;
    if (x < base) {
        return itoa(x);
    }
    return itoa(x % base) + convert2MbaseNum(base, x / base);

}

int main() {
    long long x;
    int m;
    cin >> x >> m;
    string res = convert2MbaseNum(m, x);
    reverse(res.begin(), res.end());
    cout << res << endl;
    return 0;
}