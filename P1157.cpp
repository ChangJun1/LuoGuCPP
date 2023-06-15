// https://www.luogu.com.cn/problem/P1157
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void generateCombinations(const vector<int> &arr, vector<int> &res, int start, int end, int index, int count) {
    if (index == count) {
        for (int i = 0; i < count; ++i) {
            cout << setw(3) << res[i];
        }
        cout << "\n";
        return;
    }
    for (int i = start; i < arr.size() && end - i >= count - index; ++i) {
        res.push_back(arr[i]);
        generateCombinations(arr, res, i + 1, end, index + 1, count);
        res.pop_back();
    }
}

int main() {
    int n, r;
    cin >> n >> r;
    vector<int> a(n), res;
    for (int i = 0; i < n; ++i) {
        a[i] = i + 1;
    }
    generateCombinations(a, res, 0, n, 0, r);
    return 0;
}
