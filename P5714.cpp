// https://www.luogu.com.cn/problem/P5714 保留6位有效数字？
#include <iostream>

using namespace std;

int main() {
    double m, h;
    cin >> m >> h;
    double BMI = m / (h * h);
    if (BMI < 18.5) {
        cout << "Underweight" << endl;
    } else if (BMI >= 24) {
        cout << BMI << endl << "Overweight\n";
    } else {
        cout << "Normal" << endl;
    }
    return 0;
}