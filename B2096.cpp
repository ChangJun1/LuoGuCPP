// https://www.luogu.com.cn/problem/B2096
#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  int maximum = -1;
  for (int i = 0; i < n; ++i) {
    int tmp;
    cin >> tmp;
    arr[i] = tmp;
    maximum = max(maximum, tmp);
  }
  unordered_map<int, int> m;
  for (auto &i : arr) {
    m[i]++;
  }
  for (int i = 0; i <= maximum; ++i) {
    if (!m.contains(i)) {
      cout << 0 << endl;
    } else {
      cout << m[i] << endl;
    }
  }
  return 0;
}