#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a;
    cout << "������һ����a: ";
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

    // ����ʼ������Ǹ��������������ʽ��ƽ����
    if (originalA < 0) {
        cout << "�������Ϊ��������ƽ����Ϊ��" << xn1 << "i" << endl;
    }
    else {
        cout << "���������ƽ����Ϊ��" << xn1 << endl;
    }

    
    return 0;
}