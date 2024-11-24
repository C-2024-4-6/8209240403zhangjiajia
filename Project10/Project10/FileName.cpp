#include <iostream>
#include <cstdio>

int main() {
    char c;
    int letters = 0, spaces = 0, digits = 0, others = 0;

    while ((c = getchar()) != '\n') {
        if (isalpha(c)) {
            letters++;
        }
        else if (isspace(c)) {
            spaces++;
        }
        else if (isdigit(c)) {
            digits++;
        }
        else {
            others++;
        }
    }

    std::cout << "Ӣ����ĸ����: " << letters << std::endl;
    std::cout << "�ո����: " << spaces << std::endl;
    std::cout << "�����ַ�����: " << digits << std::endl;
    std::cout << "�����ַ�����: " << others << std::endl;

    return 0;