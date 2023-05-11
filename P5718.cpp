// https://www.luogu.com.cn/problem/P5718
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    int minVal = 1000;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    cout << minVal << endl;
    return 0;
}