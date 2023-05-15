// https://www.luogu.com.cn/problem/P1161
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    // 关灯为0, 开灯为1
    vector<int> arr(2000001);
    int maxIndex = 0;
    for (int i = 1; i <= n; ++i) {
        double a;
        int t;
        cin >> a >> t;
        for (int j = 1; j <= t; ++j) {
            int index = (int) (a * j);
            arr[index] = 1 - arr[index];
        }
        maxIndex = max(maxIndex, (int) (t * a));
    }
    int res = 0;
    for (int i = 1; i <= maxIndex; ++i) {
        if (arr[i] == 1) {
            res = i;
            break;
        }
    }
    cout << res << endl;
    return 0;
}