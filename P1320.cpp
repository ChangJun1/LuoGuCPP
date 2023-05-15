//// https://www.luogu.com.cn/problem/P1320
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s;
    vector<int> res;
    int count = 0, finishCount = 0;
    char flag = '0';
    bool first = true, finished = false;
    while (!finished) {
        cin >> s;
        if (first) {
            res.push_back(s.size());
            first = false;
        }
        for (int i = 0; i < s.size();) {
            while (s[i] == flag && i < s.size()) {
                count++;
                i++;
            }
            if (i == s.size()) {
                break;
            }
            res.push_back(count);
            count = 0;
            flag = flag == '0' ? '1' : '0';
        }
        finishCount++;
        if (finishCount == s.size()) {
            finished = true;
        }
    }
    if (count > 0) {
        res.push_back(count);
    }
    for (int &i: res) {
        cout << i << " ";
    }
    return 0;
}
