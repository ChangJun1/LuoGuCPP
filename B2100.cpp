// https://www.luogu.com.cn/problem/B2100
#include <iostream>

using namespace std;

int main() {
  int n, row, col;
  cin >> n >> row >> col;
  for (int j = 1; j <= n; ++j) {
    cout << "(" << row << "," << j << ") ";
  }
  cout << endl;

  for (int i = 1; i <= n; ++i) {
    cout << "(" << i << "," << col << ") ";
  }
  cout << endl;

  if (row <= col) {
    for (int i = 1, j = 1 + col - row; i <= n && j <= n; ++i, ++j) {
      cout << "(" << i << "," << j << ") ";
    }
  } else {
    for (int i = 1 + row - col, j = 1; i <= n && j <= n; ++i, ++j) {
      cout << "(" << i << "," << j << ") ";
    }
  }
  cout << endl;

  int a = n - row;
  int b = col - 1;
  if (a <= b) {
    for (int i = n, j = 1 + b - a; i >= 1 && j <= n; --i, ++j) {
      cout << "(" << i << "," << j << ") ";
    }
  } else {
    for (int i = n - (a - b), j = 1; i >= 1 && j <= n; --i, ++j) {
      cout << "(" << i << "," << j << ") ";
    }
  }
  cout << endl;
  return 0;
}