// https://www.luogu.com.cn/problem/P2676
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int x, int y) {
    return x > y;
}

int main() {
    int n, b;
    cin >> n >> b;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), cmp);
    int sum = 0, count = 0;
    for (auto &i: a) {
        sum += i;
        count++;
        if (sum >= b) {
            break;
        }
    }
    cout << count << endl;
    return 0;
}