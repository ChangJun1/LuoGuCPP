// https://www.luogu.com.cn/problem/P1888
#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int minVal = min(min(a, b), c);
    int maxVal = max(max(a, b), c);
    int g = gcd(maxVal, minVal);
    cout << minVal / g << "/" << maxVal / g << endl;
    return 0;
}