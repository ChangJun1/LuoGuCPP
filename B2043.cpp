//https://www.luogu.com.cn/problem/B2043
#include <iostream>
#include <vector>

using namespace std;

void DivideByFactor(unsigned int &num, std::vector<int> &factor) {
    for (auto i: factor) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
}

int main() {
    vector<int> v;
    unsigned int a;
    cin >> a;
    std::vector<int> d{3, 5, 7};
    DivideByFactor(a, d);
    return 0;
}