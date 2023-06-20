// https://www.luogu.com.cn/problem/P1088
#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> ord(n);
    for (int i = 0; i < n; ++i) {
        cin >> ord[i];
    }
    for (int i = 1; i <= m; ++i) {
        next_permutation(ord.begin(), ord.end());
    }
    for (int i = 0; i < n - 1; ++i) {
        cout << ord[i] << " ";
    }
    cout << ord[n - 1];
    return 0;
}