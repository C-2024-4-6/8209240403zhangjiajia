#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "�����������ε������ߣ�";
    cin >> a >> b >> c;

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        double perimeter = a + b + c;
        cout << "�����ε��ܳ�Ϊ��" << perimeter << endl;

        if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a)) {
            cout << "���������ǵ���������" << endl;
        }
        else {
            cout << "�������β��ǵ���������" << endl;
        }
    }
    else {
        cout << "������������޷�����������" << endl;
    }

    return 0;
}