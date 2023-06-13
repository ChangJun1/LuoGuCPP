// https://www.luogu.com.cn/problem/P1068
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct candidate {
    int id;
    int grade;
};

bool comp(const candidate &a, const candidate &b) {
    if (a.grade != b.grade) {
        return a.grade > b.grade;
    } else {
        return a.id < b.id;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<candidate> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i].id >> a[i].grade;
    }
    sort(a.begin(), a.end(), comp);
    int num = int(m * 1.5);
    int count = num, pass = a[count - 1].grade;
    if (num >= n) {
        count = n;
        pass = a[n - 1].grade;
    } else {
        while (count < n && a[count - 1].grade == a[count].grade) {
            count++;
        }
    }
    cout << pass << " " << count << "\n";
    for (int i = 0; i < count; ++i) {
        cout << a[i].id << " " << a[i].grade << "\n";
    }
    return 0;
}
