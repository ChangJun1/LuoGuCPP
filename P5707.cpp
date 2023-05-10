// https://www.luogu.com.cn/problem/P5707
#include<iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int s, v;
    cin >> s >> v;
    int minute = (int) ceil(s * 1.0 / v) + 10;
    if (minute <= 60) {
        cout << setw(2) << setfill('0') << "07:"
             << setw(2) << setfill('0') << 60 - minute
             << endl;
        return 0;
    }

    int hour = minute / 60;
    minute = minute % 60;
    if (minute != 0) {
        hour++;
    }
    if (hour <= 8) {
        cout << setw(2) << setfill('0') << 8 - hour << ":"
             << setw(2) << setfill('0') << (minute == 0 ? 0 : 60 - minute)
             << endl;
    } else {
        cout << setw(2) << setfill('0') << 24 + 8 - hour << ":"
             << setw(2) << setfill('0') << (minute == 0 ? 0 : 60 - minute)
             << endl;
    }
    return 0;
}