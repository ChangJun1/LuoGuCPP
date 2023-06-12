#include <iostream>

using namespace std;

int main() {
    double ratio;
    cin >> ratio;
    string s1, s2;
    cin >> s1 >> s2;
    size_t n = s1.size();
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (s1[i] == s2[i]) {
            count++;
        }
    }
    double percent = count * 1.0 / n;
    if (percent > ratio) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;
}