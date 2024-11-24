#include <iostream>
int gcd(int a, int b);
int lcm(int a, int b);

int main() {
    int a, b;
    std::cout << "请输入两个正整数：";
    std::cin >> a >> b;
    int greatestCommonDivisor = gcd(a, b);
    int leastCommonMultiple = lcm(a, b);

    std::cout << "最大公约数（GCD）是：" << greatestCommonDivisor << std::endl;
    std::cout << "最小公倍数（LCM）是：" << leastCommonMultiple << std::endl;

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