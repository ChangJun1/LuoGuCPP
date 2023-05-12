// https://www.luogu.com.cn/problem/P5726
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int min = 11, max = -1;
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
        sum += a[i];
    }

    double avg = (sum - max - min) * 1.0 / (n - 2);
    cout << setprecision(2) << fixed << avg << endl;
    return 0;
}