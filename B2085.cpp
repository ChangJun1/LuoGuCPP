//https://www.luogu.com.cn/problem/B2085
#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n == 2 || n == 3) {
        return true;
    }
    for (int i = 2; i <= ceil(sqrt(n)); ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int count = 0, i = 1;
    while (count < n) {
        i++;
        if (isPrime(i)) {
            count++;
        }
    }
    cout << i << endl;
    return 0;
}