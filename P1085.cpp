// https://www.luogu.com.cn/problem/P1085
#include <iostream>

using namespace std;

int main() {
    int weekday = 0;
    int maxVal = 0;
    bool happy = true;
    for (int i = 1; i <= 7; ++i) {
        int a, b;
        cin >> a >> b;
        int sum = a + b;
        if (sum > 8 && sum > maxVal) {
            happy = false;
            maxVal = sum;
            weekday = i;
        }
    }
    if (happy) {
        cout << 0 << endl;
    } else {
        cout << weekday << endl;
    }
    return 0;
}