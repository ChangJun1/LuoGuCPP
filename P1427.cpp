// https://www.luogu.com.cn/problem/P1427
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int x = 1;
    vector<int> arr;
    while (x != 0) {
        cin >> x;
        arr.push_back(x);
    }
    for (int i = arr.size() - 2; i >= 0; --i) {
        cout << arr[i] << " ";
    }
    return 0;
}