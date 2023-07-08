// https://www.luogu.com.cn/problem/B2126
#include <iostream>
#include <string>

using namespace std;

int main() {
    int k;
    string s;
    cin >> k >> s;
    int n = s.size(), i = 0, count = 0;
    char c = s[0];
    while (i < n) {
        while (i < n && s[i] == c && count < k) {
            count++;
            i++;
        }
        if (count == k) {
            cout << c << endl;
            return 0;
        } else {
            count = 0;
            if (i < n) {
                c = s[i];
            }
        }
    }
    cout << "No" << endl;
    return 0;
}