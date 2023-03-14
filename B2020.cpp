//https://www.luogu.com.cn/problem/B2020
#include <iostream>

using namespace std;

int main() {
    int nums[5];
    for (int i = 0; i < 5; i++) {
        cin >> nums[i];
    }
    int total = 0;
    for (int i = 0; i < 5; i++) {
        int next = (i + 1) % 5;
        int last = (i + 4) % 5;
        int tmp = nums[i] / 3;
        total += nums[i] % 3;
        nums[i] = tmp;
        nums[next] += tmp;
        nums[last] += tmp;
    }
    for (auto &i: nums) {
        cout << i << " ";
    }
    cout << endl;
    cout << total << endl;
    return 0;
}