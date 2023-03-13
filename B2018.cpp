//https://www.luogu.com.cn/problem/B2018
#include <iostream>

using namespace std;

int main() {
    unsigned int a;
    cin >> a;
    try{
        if(a < 0 || a >=128) {
            throw std::invalid_argument("无效参数");
        }
    }
    catch (invalid_argument &e){
        cerr << e.what() << endl;
        return -1;
    }
    cout << (char) a << endl;
    return 0;
}
