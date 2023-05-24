// https://www.luogu.com.cn/problem/P5015
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int count = 0;
    for (int i = 0; i < s.size(); ++i) {
        /*if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z' || s[i] >= '0' && s[i] <= '9') {
            count++;
        }*/
        if (isalpha(s[i]) || isdigit(s[i])) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}