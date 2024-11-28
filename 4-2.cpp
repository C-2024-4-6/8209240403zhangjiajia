#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int parseHex(const char* const hexString) {
    int len = strlen(hexString);
    int result = 0;
    int base = 1;
    for (int i = len - 1; i >= 0; --i) {
        char ch = hexString[i];
        int digit;
        if (isdigit(ch)) {
            digit = ch - '0';
        }
        else if (ch >= 'a' && ch <= 'f') {
            digit = ch - 'a' + 10;
        }
        else if (ch >= 'A' && ch <= 'F') {
            digit = ch - 'A' + 10;
        }
        else {
           
            return -1;
        }
        result += digit * base;
        base *= 16;
    }
    return result;
}

int main() {
    const char* hexStr = "A5";  
    int decimal = parseHex(hexStr);
    if (decimal != -1) {
        cout << "十六进制字符串 " << hexStr << " 转换后的十进制数为: " << decimal << endl;
    }
    else {
        cout << "输入的十六进制字符串不合法" << endl;
    }
    return 0;
}