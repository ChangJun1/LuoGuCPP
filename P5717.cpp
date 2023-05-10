// https://www.luogu.com.cn/problem/P5717
#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Not triangle" << endl;
        return 0;
    }
    double cosA = (b * b + c * c - a * a) / (2.0 * b * c);
    double cosB = (a * a + c * c - b * b) / (2.0 * a * c);
    double cosC = (a * a + b * b - c * c) / (2.0 * a * b);
    if (cosA == 0 || cosB == 0 || cosC == 0) {
        cout << "Right triangle" << endl;
    } else if (cosA < 0 || cosB < 0 || cosC < 0) {
        cout << "Obtuse triangle" << endl;
//    } else if (cosA > 0 && cosA < 1 && cosB > 0 && cosB < 1 && cosC > 0 && cosC < 1) {
    } else {
        cout << "Acute triangle" << endl;
    }
    if (a == b || a == c || b == c) {
        cout << "Isosceles triangle" << endl;
    }
    if (a == b && b == c) {
        cout << "Equilateral triangle" << endl;
    }
    return 0;
}