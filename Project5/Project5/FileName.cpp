#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "������һ���ַ�";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z') {
        cout << "ת��Ϊ��д��ĸ��" << char(toupper(ch)) << endl;
    }
    else {
        cout << "����ַ���ASCII��ֵ��" << int(ch + 1) << endl;

    }
    return 0;
}