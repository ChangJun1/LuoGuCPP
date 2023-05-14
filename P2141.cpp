// https://www.luogu.com.cn/problem/P2141
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> m1, m2;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        m1[a[i]] = 1;
    }
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            m2[a[i] + a[j]]++;
        }
    }
    int count = 0;
    for (auto &it: m2) {
        if (m1[it.first] > 0) {
            count++;
        }
    }
    // another way
    /* for (int i = 0; i < n; ++i) {
         cin >> a[i];
     }
     sort(a.begin(), a.end()); // 排序
     int count = 0;
     for (int i = n - 1; i >= 2; --i) {
         int j = 0, k = i - 1; // 双指针
         while (j < k) {
             if (a[j] + a[k] < a[i]) {
                 ++j; // 左指针右移
             } else if (a[j] + a[k] > a[i]) {
                 --k; // 右指针左移
             } else {
                 ++count;
                 break;
             }
         }
     }*/
    cout << count << endl;
    return 0;
}