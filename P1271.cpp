// https://www.luogu.com.cn/problem/P1271
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void mergeSort(vector<int> &a, int left, int right) {
    if (left >= right) {
        return;
    }
    int mid = left + (right - left) / 2;
    mergeSort(a, left, mid);
    mergeSort(a, mid + 1, right);
    int i = left, j = mid + 1, k = 0;
    vector<int> tmp(right - left + 1);
    while (i <= mid && j <= right) {
        if (a[i] <= a[j]) {
            tmp[k++] = a[i++];
        } else {
            tmp[k++] = a[j++];
        }
    }
    while (i <= mid) {
        tmp[k++] = a[i++];
    }
    while (j <= right) {
        tmp[k++] = a[j++];
    }
    for (int l = 0; l < k; l++) {
        a[left + l] = tmp[l];
    }
}

void print(const vector<int> &arr) {
    for_each(arr.begin(), arr.end(), [&](int x) {
        cout << x << " ";
    });
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m, 0);
    // count the votes of candidates
    for (int i = 0; i < m; ++i) {
        cin >> a[i];
    }
    // sort
    mergeSort(a, 0, m - 1);
    print(a);
    return 0;
}

