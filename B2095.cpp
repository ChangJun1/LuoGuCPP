// https://www.luogu.com.cn/problem/B2095
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>

using namespace std;

int main() {
  int n;
  cin >> n;
  double a[n];
  double maxIndex = 300;
  double minIndex = -1;
  double max = numeric_limits<double>::min();
  double min = numeric_limits<double>::max();
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    if (a[i] > max) {
      max = a[i];
      maxIndex = i;
    }
    if (a[i] < min) {
      min = a[i];
      minIndex = i;
    }
  }
  double sum = 0.0;
  for (int i = 0; i < n; ++i) {
    if (i != maxIndex && i != minIndex) {
      sum += a[i];
    }
  }
  double average = sum / (n - 2);
  double error = 0.0;
  for (int i = 0; i < n; ++i) {
    // can not compare two real number which is double by equal operator "=="
    // simply!
    if (i != maxIndex && i != minIndex) {
      if (fabs(a[i] - average) > error) {
        error = fabs(a[i] - average);
      }
    }
  }
  cout << fixed << setprecision(2) << average << " " << error << endl;
  return 0;
}