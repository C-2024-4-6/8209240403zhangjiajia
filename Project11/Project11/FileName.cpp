#include <iostream>
int gcd(int a, int b);
int lcm(int a, int b);

int main() {
    int a, b;
    std::cout << "������������������";
    std::cin >> a >> b;
    int greatestCommonDivisor = gcd(a, b);
    int leastCommonMultiple = lcm(a, b);

    std::cout << "���Լ����GCD���ǣ�" << greatestCommonDivisor << std::endl;
    std::cout << "��С��������LCM���ǣ�" << leastCommonMultiple << std::endl;

    return 0;
}
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b; 
}