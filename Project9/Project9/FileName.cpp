#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "请输入第一个数：";
    cin >> num1;

    cout << "请输入运算符（+ - * / %）：";
    cin >> op;

    cout << "请输入第二个数：";
    cin >> num2;

    double result;

    switch (op) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 == 0) {
            cout << "除数不能为0" << endl;
            return 1;
        }
        result = num1 / num2;
        break;
    case '%':
        if (num2 == 0) {
            cout << "除数不能为0" << endl;
            return 1;
        }
        result = (int)num1 % (int)num2;
        break;
    default:
        cout << "非法运算符" << endl;
        return 1;
    }

    cout << "结果为：" << result << endl;

    return 0;
}