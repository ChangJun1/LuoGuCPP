//https://www.luogu.com.cn/problem/B2031
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//定义一个三维向量类
class Vector3D {
public:
    //构造函数
    Vector3D(double x = 0.0, double y = 0.0, double z = 0.0) : x(x), y(y), z(z) {}

    //拷贝构造函数
    Vector3D(const Vector3D &v) : x(v.x), y(v.y), z(v.z) {}

    //析构函数
    ~Vector3D() {}

    //重载运算符*
    double operator*(const Vector3D &v) const {
        return x * v.x + y * v.y + z * v.z;
    }

    //重载运算符^，表示叉乘
    Vector3D operator^(const Vector3D &v) const {
        return Vector3D(y * v.z - z * v.y,
                        z * v.x - x * v.z,
                        x * v.y - y * v.x);
    }

private:
    double x; //x坐标
    double y; //y坐标
    double z; //z坐标

};

// 此题也可用海伦公式

int main() {
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    Vector3D a{x2 - x1, y2 - y1, 0};
    Vector3D b{x3 - x1, y3 - y1, 0};
    Vector3D c = a ^ b;
    double res = sqrt(c * c) / 2;
    cout << fixed << setprecision(2) << res << endl;
    return 0;
}