// https://www.luogu.com.cn/problem/P1603
#include <iostream>
#include <iomanip>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s;
    unordered_map<string, int> m;
    m["one"] = 1;
    m["two"] = 2;
    m["three"] = 3;
    m["four"] = 4;
    m["five"] = 5;
    m["six"] = 6;
    m["seven"] = 7;
    m["eight"] = 8;
    m["nine"] = 9;
    m["ten"] = 10;
    m["eleven"] = 11;
    m["twelve"] = 12;
    m["thirteen"] = 13;
    m["fourteen"] = 14;
    m["fifteen"] = 15;
    m["sixteen"] = 16;
    m["seventeen"] = 17;
    m["eighteen"] = 18;
    m["nineteen"] = 19;
    m["twenty"] = 20;
    m["a"] = 1;
    m["both"] = 2;
    m["another"] = 1;
    m["first"] = 1;
    m["second"] = 2;
    m["third"] = 3;
    vector<int> v;
    for (int i = 0; i < 6; ++i) {
        cin >> s;
        if (m.find(s) != m.end()) {
            int r = m[s] * m[s] % 100;
            if (r == 0) {
                continue;
            }
            v.push_back(r);
        }
    }
    sort(v.begin(), v.end());
    if (v.size() == 0) {
        cout << 0 << endl;
    } else {
        cout << v[0];
        for (int i = 1; i < v.size(); ++i) {
            cout << setw(2) << setfill('0') << v[i];
        }
    }
    return 0;
}
