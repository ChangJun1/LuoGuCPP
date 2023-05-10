// https://www.luogu.com.cn/problem/P2433
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double pi = 3.141593;

int main() {
    int a;
    cin >> a;
    switch (a) {
        case 1:
            cout << "I love Luogu!";
            break;
        case 2:
            cout << 2 + 4 << " " << 10 - (2 + 4);
            break;
        case 3:
            cout << 14 / 4 << "\n" << 4 * (14 / 4) << "\n" << 14 - 4 * (14 / 4);
            break;
        case 4:
            cout << setprecision(6) << 500 * 1.0 / 3;
            break;
        case 5:
            cout << (260 + 220) / (20 + 12);
            break;
        case 6:
            cout << sqrt(6 * 6 + 9 * 9);
            break;
        case 7:
            cout << 100 + 10 << "\n" << 100 + 10 - 20 << "\n" << 0;
            break;
        case 8:
            cout << 2 * pi * 5 << "\n" << pi * 5 * 5 << "\n" << 4 * pi * 5 * 5 * 5 / 3;
            break;
        case 9:
            cout << (((1 + 1) * 2 + 1) * 2 + 1) * 2;
            break;
        case 10:
            // 牛吃草问题
            // x + 30y = 30 x 8
            // x + 6y = 6x10
            // x = 15, y = 7.5
            // 7.5 + 15 / 10 = 9
            // 简便解法
            // 6 < 10 < 30
            // 10 > ? > 8
            // 未知数为整数则必然为9
            cout << 9;
            break;
        case 11:
            cout << 100 * 1.0 / (8 - 5);
            break;
        case 12:
            cout << 'M' - 'A' + 1 << "\n" << (char) ('A' + 17);
            break;
        case 13:
            cout << (int) (pow(4 * pi / 3 * (pow(4, 3) + pow(10, 3)), 1.0 / 3));
            break;
        case 14:
            // (110-x)(10+x) = 3500
            // x_1 = 60, x_2 = 40
            cout << 50;
            break;
        default:
            cout << "error";
            break;
    }
    return 0;
}