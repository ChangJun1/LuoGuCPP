//https://www.luogu.com.cn/problem/B2068
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        int onesPlace = tmp % 10;
        int tensPlace = tmp / 10 % 10;
        int hundredsPlace = tmp / 100 % 10;
        int thousandsPlace = tmp / 1000;
        if (onesPlace - tensPlace - hundredsPlace - thousandsPlace > 0) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
