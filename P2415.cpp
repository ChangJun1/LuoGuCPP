// https://www.luogu.com.cn/problem/P2415
#include <iostream>
#include <sstream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    string line;
    getline(cin, line);
    istringstream iss(line);
    int num;
    int count = 0;
    long long sum = 0;
    while (iss >> num) {
        sum += num;
        count++;
    }
    long long res = sum * (long long) pow(2, count - 1);
    cout << res << endl;
    return 0;
}