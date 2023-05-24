// https://www.luogu.com.cn/problem/P1308
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s, str;
    getline(cin, s);
    getline(cin, str);
    std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c) { return std::tolower(c); });
    std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c) { return std::tolower(c); });
    int count = 0;
    size_t index = str.find(s);
    size_t res = string::npos;
    bool flag = true;
    while (index != string::npos) {
        if ((index == 0 && index + s.size() == str.size()) ||
            (index == 0 && str[index + s.size()] == ' ') ||
            (str[index - 1] == ' ' && index + s.size() == str.size()) ||
            (str[index - 1] == ' ' && str[index + s.size()] == ' ')) {
            ++count;
            if (flag) {
                res = index;
                flag = false;
            }
        }
        index = str.find(s, index + s.size());
    }
    if (res != string::npos) {
        cout << count << " " << res << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}