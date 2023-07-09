// https://www.luogu.com.cn/problem/B2127
#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>

using namespace std;

bool isCompleteNum(int n) {
    vector<int> arr;
    arr.push_back(1);
    int sqrt_n = (int) sqrt(n);
    for (int i = 2; i <= sqrt_n; ++i) {
        if (n % i == 0) {
            arr.push_back(i);
            if (i != n / i) {
                arr.push_back(n / i);
            }
        }
    }
    int sum = accumulate(arr.begin(), arr.end(), 0);
    if (sum == n) {
        return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    for (int i = 2; i <= n; ++i) {
        if (isCompleteNum(i)) {
            cout << i << "\n";
        }
    }
    return 0;
}