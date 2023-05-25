//// https://www.luogu.com.cn/problem/P1321
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    int boyCount = 0, girlCount = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '.') {
            continue;
        }
        if (i + 2 < s.size() && s[i] == 'b' || s[i + 1] == 'o' || s[i + 2] == 'y') {
            boyCount++;
        }
        if (i + 3 < s.size() && s[i] == 'g' || s[i + 1] == 'i' || s[i + 2] == 'r' || s[i + 3] == 'l') {
            girlCount++;
        }
    }
    cout << boyCount << endl << girlCount << endl;
    return 0;
}
