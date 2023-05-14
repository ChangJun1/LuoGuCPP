// https://www.luogu.com.cn/problem/B2615
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int> > arr(n, vector<int>(n));
    int row = 0, col = n / 2;
    arr[row][col] = 1;
    for (int k = 2; k <= n * n; ++k) {
        if (row == 0 && col < n - 1) {
            row = n - 1;
            col++;
        } else if (row > 0 && col == n - 1) {
            row--;
            col = 0;
        } else if (row == 0 && col == n - 1) {
            row++;
        } else {
            if (arr[row - 1][col + 1] == 0) {
                row--;
                col++;
            } else {
                row++;
            }
        }
        arr[row][col] = k;
    }
    for (auto &v: arr) {
        for (auto &i: v) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}