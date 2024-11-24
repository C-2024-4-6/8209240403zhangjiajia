#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a;
    cout << "请输入一个数a: ";
    cin >> a;
    double originalA = a;
    if (a < 0) {
        a = -a;
    }

    double xn = a;
    double xn1;
    do {
        xn1 = 0.5 * (xn + a / xn);
        if (fabs(xn1 - xn) < 1e-5) {
            break;
        }
        xn = xn1;
    } while (true);

    // 如果最开始输入的是负数，输出虚数形式的平方根
    if (originalA < 0) {
        cout << "输入的数为负数，其平方根为：" << xn1 << "i" << endl;
    }
    else {
        cout << "输入的数的平方根为：" << xn1 << endl;
    }

    
    return 0;
}