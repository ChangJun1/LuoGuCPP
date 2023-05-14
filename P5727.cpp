// https://www.luogu.com.cn/problem/P5727
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    arr.push_back(n);
    while (n != 1) {
        if (n & 1) {
            n = 3 * n + 1;
        } else {
            n /= 2;
        }
        arr.push_back(n);
    }
    for (int i = arr.size() - 1; i >= 0; --i) {
        cout << arr[i] << " ";
    }
    return 0;
}