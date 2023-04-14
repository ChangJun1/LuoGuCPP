// https://www.luogu.com.cn/problem/B2098
#include <algorithm>
#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; ++i) {
    int tmp;
    cin >> tmp;
    arr[i] = tmp;
  }
  vector<int> res;
  unordered_set<int> m;
  for (int i = 0; i < n; ++i) {
    if (m.contains(arr[i])) {
      continue;
    } else {
      m.insert(arr[i]);
      res.push_back(arr[i]);
    }
  }
  for_each(res.begin(), res.end(), [](int a) { cout << a << " "; });
  return 0;
}