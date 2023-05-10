// https://www.luogu.com.cn/problem/P142
#include<iostream>

using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    int sum = a * 10 + b;
    int res = sum / (10 + 9);
    cout << res << endl;
    return 0;
}