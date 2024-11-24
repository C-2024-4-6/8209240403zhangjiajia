#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "请输入一个字符";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z') {
        cout << "转换为大写字母：" << char(toupper(ch)) << endl;
    }
    else {
        cout << "后继字符的ASCII码值：" << int(ch + 1) << endl;

    }
    return 0;
}