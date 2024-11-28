#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
void gcdAndLcm(int m, int n, int& greatestCommonDivisor, int& leastCommonMultiple) {
    greatestCommonDivisor = gcd(m, n);
    leastCommonMultiple = m * n / greatestCommonDivisor;
}

int main() {
    int m, n;
    cout << "请输入两个自然数m和n：";
    cin >> m >> n;
    int greatestCommonDivisor = gcd(m, n);
    cout << "最大公约数为: " << greatestCommonDivisor << endl;

    int lcm;
    int gcdValue;
    gcdAndLcm(m, n, gcdValue, lcm);
    cout << "最大公约数为: " << gcdValue << " 最小公倍数为: " << lcm << endl;

    return 0;
}