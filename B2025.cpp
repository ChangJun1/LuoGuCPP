//https://www.luogu.com.cn/problem/B2025
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < abs(2 - i); j++) {
            cout << " ";
        }
        for (int j = 0; j < 5 - abs(2 * i - 4); j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
