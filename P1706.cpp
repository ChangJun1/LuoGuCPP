// https://www.luogu.com.cn/problem/P1706
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

void permute(vector<int> &arr, vector<vector<int> > &res, int start, int end) {
    if (start == end) {
        res.push_back(arr);
        return;
    }
    for (int i = start; i < end; i++) {
        swap(arr[start], arr[i]);
        permute(arr, res, start + 1, end);
        swap(arr[start], arr[i]);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<vector<int> > res;
    for (int i = 0; i < n; ++i) {
        arr[i] = i + 1;
    }
    permute(arr, res, 0, n);
    sort(res.begin(), res.end());
    for (auto &v: res) {
        for (int &x: v) {
            cout << setw(5) << x;
        }
        cout << "\n";
    }
    return 0;
}

/*
c++可以用next_permutation函数
sort(nums.begin(),nums.end());
do{
    res.push_back(nums);
} while (next_permutation(nums.begin(), nums.end()));*/
