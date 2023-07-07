// https://www.luogu.com.cn/problem/B2125
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct student {
    int grade;
    string name;
};

int main() {
    int n;
    cin >> n;
    vector<student> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i].grade >> arr[i].name;
    }
    sort(arr.begin(), arr.end(), [](student &a, student &b) {
        return a.grade > b.grade;
    });
    cout << arr[0].name << endl;
    return 0;
}