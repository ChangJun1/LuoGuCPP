// https://www.luogu.com.cn/problem/P1428
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n), res(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        for (int j = i - 1; j >= 0; --j) {
            if (arr[j] < arr[i]) {
                res[i]++;
            }
        }
    }
    for (int i: res) {
        cout << i << " ";
    }
    return 0;
}