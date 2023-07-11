// https://www.luogu.com.cn/problem/B2128
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    vector<bool> arr(n + 1, true);
    arr[0] = false, arr[1] = false;
    for (int i = 2; i <= n; i++) {
        if (!arr[i]) {
            continue;
        }
        for (int j = 2 * i; j <= n; j += i) {
            arr[j] = false;
        }
    }
    for (int i = 2; i <= n; i++) {
        if (arr[i]) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}