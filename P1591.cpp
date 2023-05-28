// https://www.luogu.com.cn/problem/P1591
#include <iostream>
#include <cstring>

using namespace std;

int arr[100000];
int p = 1;

void factorial(int *a, int n) {
    int carry = 0;
    for (int i = 2; i <= n; ++i) {
        for (int j = 1; j <= p; ++j) {
            a[j] = a[j] * i + carry;
            carry = a[j] / 10;
            a[j] = a[j] % 10;
        }
        while (carry) {
            p++;
            a[p] = carry % 10;
            carry /= 10;
        }
    }
}

int count(const int *a, int x) {
    int res = 0;
    for (int i = 1; i <= p; ++i) {
        if (a[i] == x) {
            res++;
        }
    }
    return res;
}

void clear(int a[], int &highest) {
    a[1] = 1;
    for (int i = 2; i <= highest; ++i) {
        a[i] = 0;
    }
    highest = 1;
}

int main() {
    memset(arr, 0, sizeof(arr) / sizeof(arr[0]));
    arr[1] = 1;
    int t, n, a;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> n >> a;
        factorial(arr, n);
        cout << count(arr, a) << endl;
        clear(arr, p);
    }
    return 0;
}
