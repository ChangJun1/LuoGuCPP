//https://www.luogu.com.cn/problem/B2046
#include <iostream>

using namespace std;

int main() {
    unsigned int s;
    cin >> s;
    double tb = 23 + 27 + s / 3.0;
    double tw = s / 1.2;
    if (tb < tw) {
        cout << "Bike" << endl;
    } else if (tb > tw) {
        cout << "Walk" << endl;
    } else {
        cout << "All" << endl;
    }
    return 0;
}