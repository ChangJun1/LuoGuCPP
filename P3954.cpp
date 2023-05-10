// https://www.luogu.com.cn/problem/P3954
#include<iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int grade = a * 0.2 + b * 0.3 + c * 0.5;
    cout << grade << endl;
    return 0;
}