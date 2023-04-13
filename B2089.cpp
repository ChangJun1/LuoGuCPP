//https://www.luogu.com.cn/problem/B2089
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void reverseArrary(vector<int> &arr) {
    for (int i = 0; i < arr.size() / 2; ++i) {
        int tmp = arr[i];
        arr[i] = arr[arr.size() - 1 - i];
        arr[arr.size() - 1 - i] = tmp;
    }
}

void printArr(const vector<int> &arr) {
    for_each(arr.begin(), arr.end(), [](int i) {
        cout << i << " ";
    });
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        arr[i] = tmp;
    }
    reverseArrary(arr);
    printArr(arr);
    return 0;
}