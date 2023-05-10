// https://www.luogu.com.cn/problem/P1909
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    int quantity1, quantity2, quantity3, price1, price2, price3;
    cin >> quantity1 >> price1
        >> quantity2 >> price2
        >> quantity3 >> price3;
    int total1 = ceil(n * 1.0 / quantity1) * price1;
    int total2 = ceil(n * 1.0 / quantity2) * price2;
    int total3 = ceil(n * 1.0 / quantity3) * price3;
    cout << min(min(total1, total2), total3) << endl;
    return 0;
}