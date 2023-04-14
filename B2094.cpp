// https://www.luogu.com.cn/problem/B2094
#include <climits>
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  int max = INT_MIN;
  int sum = 0;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    if (a[i] > max) {
      max = a[i];
    }
    //    sum += a[i];
    //    it looks so weird, in general, wo could add all numbers
    //    then subtract the maximum one, however this didn't work.
    //    notice that int of sum may overflow,
    //    but even if we change its type to long long
    //    this answer still can't be accepted.
  }
  //  sum -= max;
  for (int i = 0; i < n; ++i) {
    if (a[i] != max) {
      sum += a[i];
    }
  }
  cout << sum << endl;
  return 0;
}