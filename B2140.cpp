// https://www.luogu.com.cn/problem/B2140
#include <iostream>

using namespace std;

pair<int, int> count01(int n) {
    pair<int, int> res;
    while (n) {
        if (n & 1) {
            res.first++;
        } else {
            res.second++;
        }
        n = n >> 1;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    int countA = 0, countB = 0;
    for (int i = 1; i <= n; i++) {
        auto t = count01(i);
        if (t.first > t.second) {
            countA++;
        } else {
            countB++;
        }
    }
    cout << countA << " " << countB << endl;
    return 0;
}