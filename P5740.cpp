// https://www.luogu.com.cn/problem/P5740
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    pair<string, vector<int> > res;
    int maxTotalGrade = -1;
    for (int i = 0; i < n; ++i) {
        string name;
        int x, y, z;
        cin >> name >> x >> y >> z;
        int sum = x + y + z;
        if (sum > maxTotalGrade) {
            maxTotalGrade = sum;
            res.first = name;
            res.second.clear();
            res.second.push_back(x);
            res.second.push_back(y);
            res.second.push_back(z);
        }
    }
    cout << res.first << " " << res.second[0] << " " << res.second[1] << " " << res.second[2] << endl;
    return 0;
}