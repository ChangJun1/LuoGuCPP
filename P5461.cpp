// https://www.luogu.com.cn/problem/P5461
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void pardon(vector<vector<int> > &arr, int len, int row, int col) {
    // x为正方形边长，i,j为正方形横纵坐标（左上角起始位置）
    // 基线条件：2x2图形只需要更改左上方的值
    if (len == 2) {
        arr[row][col] = 0;
        return;
    }
    int mid = len / 2;
    for (int i = row; i < mid + row; ++i) {
        for (int j = col; j < mid + col; ++j) {
            arr[i][j] = 0;
        }
    }
    pardon(arr, len / 2, row, col + len / 2);
    pardon(arr, len / 2, row + len / 2, col);
    pardon(arr, len / 2, row + len / 2, col + len / 2);
}

void print(const vector<vector<int> > &arr) {
    for (auto &v: arr) {
        for (auto &i: v) {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    int size = (int) pow(2, n);
    vector<vector<int> > arr(size, vector<int>(size, 1));
    pardon(arr, arr.size(), 0, 0);
    print(arr);
    return 0;
}