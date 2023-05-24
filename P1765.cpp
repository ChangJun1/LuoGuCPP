// https://www.luogu.com.cn/problem/P1765
#include <iostream>
#include <string>

using namespace std;

int count(char c) {
    int res = 0;
    if (c == 's' || c == 'z') {
        return 4;
    } else if (c >= 'a' && c <= 'r') {
        res = (c - 'a') % 3;
    } else if (c >= 't' && c <= 'y') {
        res = (c - 't') % 3;
    }
    if (res == 0) {
        return 1;
    } else if (res == 1) {
        return 2;
    } else {
        return 3;
    }
}

int main() {
    string s;
    getline(cin, s);
    int res = 0;
//    题目描述：一行句子，只包含英文小写字母和空格，且不超过 200 个字符。纯纯垃圾题目
//    '\n'和'\r'是这个题的坑点
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == ' ') {
            res++;
        }
        if (s[i] >= 'a' && s[i] <= 'z') {
            res += count(s[i]);
        }
    }
    cout << res << endl;
    return 0;
}