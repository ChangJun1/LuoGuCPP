// https://www.luogu.com.cn/problem/P1554
#include <iostream>
#include <vector>

using namespace std;

void digitCount(vector<int> &arr, int num) {
    while (num) {
        int r = num % 10;
        arr[r]++;
        num /= 10;
    }
}

int main() {
    int M, N;
    cin >> M >> N;
    vector<int> arr(10);
    for (int i = M; i <= N; ++i) {
        digitCount(arr, i);
    }
    for (int i = 0; i < 10; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}