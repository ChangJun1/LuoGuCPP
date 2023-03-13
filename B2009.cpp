#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    try {
        if (c == 0) {
            throw invalid_argument("can not divide by zero");
        }
        int res = (a + b) / c;
        cout << res << endl;
        return 0;
    }
    catch (invalid_argument &e) {
        cerr << e.what() << endl;
        return -1;
    }
}