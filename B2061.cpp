//https://www.luogu.com.cn/problem/B2061
#include <iostream>

using namespace std;

int main() {
    int k;
    cin >> k;
    int oneCount = 0, fiveCount = 0, tenCount = 0;
    for (int i = 0; i < k; i++) {
        int tmp;
        cin >> tmp;
        if (tmp == 1) {
            oneCount++;
        } else if (tmp == 5) {
            fiveCount++;
        } else if (tmp == 10) {
            tenCount++;
        }
    }
    cout << oneCount << endl;
    cout << fiveCount << endl;
    cout << tenCount << endl;
    return 0;
}