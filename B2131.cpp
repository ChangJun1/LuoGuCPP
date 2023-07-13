// https://www.luogu.com.cn/problem/B2131
#include <iostream>
#include <string>

using namespace std;

struct patient {
    string name;
    float temperature;
    int cough;
};

int main() {
    int n, count = 0;
    cin >> n;
    patient a;
    for (int i = 0; i < n; ++i) {
        cin >> a.name >> a.temperature >> a.cough;
        if (a.cough == 1 && a.temperature >= 37.5f) {
            cout << a.name << "\n";
            count++;
        }
    }
    cout << count << endl;
    return 0;
}