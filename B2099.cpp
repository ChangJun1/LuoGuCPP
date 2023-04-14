// https://www.luogu.com.cn/problem/B2099
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int a[5][5];
  for (auto &i : a) {
    for (int &j : i) {
      cin >> j;
    }
  }
  int m, n;
  cin >> m >> n;
  for (int i = 0; i < 5; ++i) {
    swap(a[m - 1][i], a[n - 1][i]);
  }
  for (auto &i : a) {
    for (int j : i) {
      cout << j << " ";
    }
    cout << endl;
  }
  return 0;
}