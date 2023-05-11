// https://www.luogu.com.cn/problem/P5724
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int min = 1010, max = 0;
    int *arr = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << max - min << endl;
    return 0;
}