//https://www.luogu.com.cn/problem/B2088
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double price[10] = {28.9, 32.7, 45.6, 78, 35, 86.2, 27.8, 43, 56, 65};
    int quantity[10];
    double total = 0;
    for (int i = 0; i < 10; ++i) {
        cin >> quantity[i];
        total += price[i] * quantity[i];
    }
    cout << fixed << setprecision(1) << total << endl;
    return 0;
}