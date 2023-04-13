//https://www.luogu.com.cn/problem/B2090
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int N;
    cin >> N;
    double count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    for (int i = 0; i < N; ++i) {
        int tmp;
        cin >> tmp;
        if (tmp > 0 && tmp <= 18) {
            count1++;
        } else if (tmp >= 19 && tmp <= 35) {
            count2++;
        } else if (tmp >= 36 && tmp <= 60) {
            count3++;
        } else if (tmp >= 61) {
            count4++;
        }
    }
    double percentage1 = count1 * 100.0 / N;
    double percentage2 = count2 * 100.0 / N;
    double percentage3 = count3 * 100.0 / N;
    double percentage4 = count4 * 100.0 / N;
    cout << fixed << setprecision(2) << percentage1 << "%\n";
    cout << fixed << setprecision(2) << percentage2 << "%\n";
    cout << fixed << setprecision(2) << percentage3 << "%\n";
    cout << fixed << setprecision(2) << percentage4 << "%\n";
    return 0;
}