// https://www.luogu.com.cn/problem/P2249
#include <cstdio>

using namespace std;

const int MAXN = 1e6 + 10;

int read() {//快读
    int x = 0, f = 1;
    char c = getchar();
    while (c < '0' || c > '9') {
        if (c == '-') f = -1;
        c = getchar();
    }
    while (c >= '0' && c <= '9') {
        x = x * 10 + c - '0';
        c = getchar();
    }
    return x * f;
}

int binarySearch(const int *a, int target, int left, int right) {
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (a[mid] < target) {
            left = mid + 1;
        } else if (a[mid] >= target) {
            right = mid;
        }
    }
    if (a[left] == target) {
        return left;
    }
    return -1;
}

int main() {
    int n = read(), m = read();
    int a[MAXN];
    for (int i = 1; i <= n; ++i) {
        a[i] = read();
    }
    while (m--) {
        int q = read();
        int ans = binarySearch(a, q, 1, n);
        printf("%d ", ans);
    }
    return 0;
}