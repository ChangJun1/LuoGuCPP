// https://www.luogu.com.cn/problem/P5706
#include<iostream>
#include <iomanip>

using namespace std;

int main() {
    double t;
    int n;
    cin >> t >> n;
    cout << setprecision(3) << fixed << t / n << endl;
    cout << 2 * n << endl;
    return 0;
} 