// https://www.luogu.com.cn/problem/B2142
#include <iostream>

using namespace std;

// 题目要求用递归
int sumOfN(int n) {
    if (n == 1) {
        return 1;
    }
    return sumOfN(n - 1) + n;
}

int main() {
    int n;
    cin >> n;
    cout << sumOfN(n) << endl;
    return 0;
}