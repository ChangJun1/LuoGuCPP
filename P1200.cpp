// https://www.luogu.com.cn/problem/P1200
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int product1 = 1, product2 = 1;
    for (char &c: s1) {
        product1 *= c - 'A' + 1;
    }
    for (char &c: s2) {
        product2 *= c - 'A' + 1;
    }
    if (product1 % 47 == product2 % 47) {
        cout << "GO" << endl;
    } else {
        cout << "STAY" << endl;
    }
    return 0;
}
