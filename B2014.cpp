#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    constexpr double pi = 3.14159;
    double r;
    cin >> r;

    double diameter = 2 * r;
    double perimeter = 2 * pi * r;
    double area = pi * r * r;
    cout << setprecision(4) << fixed << diameter << " " << perimeter << " " << area << endl;
    return 0;
}
