//https://www.luogu.com.cn/problem/B2054
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int age;
        cin >> age;
        sum += age;
    }
    double res = sum * 1.0 / n;
    cout << fixed << setprecision(2) << res << endl;
    return 0;
}