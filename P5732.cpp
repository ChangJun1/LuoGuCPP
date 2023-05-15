// https://www.luogu.com.cn/problem/P5732
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> arr;
    arr.push_back({1});
    for (int i = 2; i <= n; ++i) {
        arr.emplace_back(i);
        arr[i - 1][0] = 1;
        arr[i - 1][i - 1] = 1;
        for (int j = 2; j < i; ++j) {
            arr[i - 1][j - 1] = arr[i - 2][j - 2] + arr[i - 2][j - 1];
        }
    }
    for (auto &v: arr) {
        for (int &i: v) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}