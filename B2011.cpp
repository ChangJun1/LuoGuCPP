#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    double d = a * 1.0 / b;
    cout << setprecision(9) << fixed << d << endl;
    return 0;
}
