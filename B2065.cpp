//https://www.luogu.com.cn/problem/B2065

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> effectiveRateV;
    for (int i = 0; i < n; ++i) {
        int t, v;
        cin >> t >> v;
        effectiveRateV.push_back(v * 1.0 / t);
    }
    for (int i = 1; i < n; ++i) {
        if (effectiveRateV[i] - effectiveRateV[0] > 0.05) {
            cout << "better" << endl;
        } else if (effectiveRateV[0] - effectiveRateV[i] > 0.05) {
            cout << "worse" << endl;
        } else {
            cout << "same" << endl;
        }
    }
    return 0;
}
