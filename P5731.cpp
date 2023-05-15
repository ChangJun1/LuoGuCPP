// https://www.luogu.com.cn/problem/P5731
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    int left = 0, right = n - 1, top = 0, bottom = n - 1, num = 1;
    for (int i = left, j = top; j < right && i < bottom; ++i, ++j) {
        while (i == top && j >= left && j < right) {
            arr[i][j++] = num++;
        }
        while (j == right && i >= top && i < bottom) {
            arr[i++][j] = num++;
        }
        while (i == bottom && j > left && j <= right) {
            arr[i][j--] = num++;
        }
        while (j == left && i > top && i <= bottom) {
            arr[i--][j] = num++;
        }
        left++;
        right--;
        top++;
        bottom--;
    }
    // if n is odd, add number to the center
    if (left == right) {
        arr[left][right] = num;
    }
    for (auto &v: arr) {
        for (auto &item: v) {
            cout << setw(3) << setfill(' ') << item;
        }
        cout << endl;
    }
    return 0;
}