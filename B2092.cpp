//https://www.luogu.com.cn/problem/B2092
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n, 1);
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; ++j) {
            if (j % i == 0) {
                arr[j - 1] = 1 - arr[j - 1];
            }
        }
    }
    for (int i = 1; i <= n; ++i) {
        if (arr[i - 1] == 0) {
            cout << i << " ";
        }
    }
    return 0;
}