#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    double d = b * 100.0 / a;
    cout << setprecision(3) << fixed << d << "%" << endl;
    return 0;
}
