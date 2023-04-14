// https://www.luogu.com.cn/problem/B2097
#include <algorithm>
#include <iostream>
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
  int j, maxLength = 0;
  for (int i = 0; i < n;) {
    j = i;
    while (j < n && arr[j] == arr[i]) {
      j++;
    }
    maxLength = max(maxLength, j - i);
    i = j;
  }
  cout << maxLength << endl;
  return 0;
}