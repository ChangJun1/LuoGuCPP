// https://www.luogu.com.cn/problem/P1104
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct student {
    std::string name;
    int year;
    int month;
    int day;
    int id;
};

bool comp(const student &a, const student &b) {
    if (a.year != b.year) {
        return a.year < b.year;
    } else if (a.month != b.month) {
        return a.month < b.month;
    } else if (a.day != b.day) {
        return a.day < b.day;
    } else {
        return a.id > b.id;
    }
}

int main() {
    int n;
    std::cin >> n;
    std::vector<student> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i].name >> a[i].year >> a[i].month >> a[i].day;
        a[i].id = i;
    }
    std::sort(a.begin(), a.end(), comp);
    for (int i = 0; i < n; ++i) {
        std::cout << a[i].name << "\n";
    }
    return 0;
}
