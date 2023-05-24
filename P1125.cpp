// https://www.luogu.com.cn/problem/P1125
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= (int) sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> a(26, 0);
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        a[s[i] - 'a']++;
    }
    int max = -1, min = 101;
    for (int &i: a) {
        if (i == 0) {
            continue;
        }
        if (i > max) {
            max = i;
        }
        if (i < min) {
            min = i;
        }
    }
    int dif = max - min;
    if (isPrime(dif)) {
        cout << "Lucky Word\n" << dif << endl;
    } else {
        cout << "No Answer\n" << 0 << endl;

    }
    return 0;
}