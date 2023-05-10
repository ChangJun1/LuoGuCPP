// https://www.luogu.com.cn/problem/P5713
#include <iostream>

using namespace std;

int main() {
    int n;
    std::cin >> n;
    int localTime = 5 * n;
    int luoguTime = 11 + 3 * n;
    if (localTime < luoguTime) {
        std::cout << "Local" << std::endl;
    } else {
        std::cout << "Luogu" << std::endl;
    }
    return 0;
}