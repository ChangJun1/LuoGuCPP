// https://www.luogu.com.cn/problem/P5715
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void selectionSort(vector<int> &arr) {
    int len = arr.size();
    for (int i = 0; i < len; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < len; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> arr{a, b, c};
    selectionSort(arr);
    std::for_each(arr.begin(), arr.end(), [&](int x) {
        cout << x << " ";
    });
    return 0;
}