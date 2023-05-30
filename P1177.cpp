// https://www.luogu.com.cn/problem/P1177
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(const vector<int> &arr) {
    for_each(arr.begin(), arr.end(), [&](int x) {
        cout << x << " ";
    });
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    // sort
    sort(a.begin(), a.end());
    print(a);
    return 0;
}

