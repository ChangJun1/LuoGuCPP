// https://www.luogu.com.cn/problem/P1423
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double s;
    cin >> s;
    double a = 2.0;
    double distance = 0;
    int count = 0;
    while (distance < s) {
        distance += a * pow(0.98, count);
        count++;
    }
    cout << count << endl;
    return 0;
}