//https://www.luogu.com.cn/problem/B2058
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int total, totalOfGold, totalOfSilver, totalOfBronze;
    total = totalOfGold = totalOfSilver = totalOfBronze = 0;
    for (int i = 0; i < n; i++) {
        int gold, silver, bronze;
        cin >> gold >> silver >> bronze;
        totalOfGold += gold;
        totalOfSilver += silver;
        totalOfBronze += bronze;
    }
    total += totalOfGold + totalOfSilver + totalOfBronze;
    cout << totalOfGold << " " << totalOfSilver << " " << totalOfBronze << " " << total << endl;
    return 0;
}