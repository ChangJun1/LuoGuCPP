// https://www.luogu.com.cn/problem/P5738
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

double average(const vector<int> &arr) {
    // local variable
    int min = 11, max = -1, sum = 0;
    for (auto &i: arr) {
        if (i > max) {
            max = i;
        }
        if (i < min) {
            min = i;
        }
        sum += i;
    }
    return (sum - min - max) * 1.0 / (arr.size() - 2);
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> arr(m);
    double maxAvg = 0.0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[j];
        }
        double avg = average(arr);
        maxAvg = max(maxAvg, avg);
    }
    cout << setprecision(2) << fixed << maxAvg << endl;
    return 0;
}