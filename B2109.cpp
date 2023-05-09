// https://www.luogu.com.cn/problem/B2109
#include <iostream>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int count = 0;
    for (const char c: s) {
        if (isdigit(c)) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}