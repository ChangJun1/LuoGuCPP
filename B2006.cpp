#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int x, a, y, b;
    cin >> x >> a >> y >> b;
    double res = (a * x - b * y) * 1.0 / (a - b);
    cout << fixed << setprecision(2) << res << endl;
}
