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
    cout << "������������Ȼ��m��n��";
    cin >> m >> n;
    int greatestCommonDivisor = gcd(m, n);
    cout << "���Լ��Ϊ: " << greatestCommonDivisor << endl;

    int lcm;
    int gcdValue;
    gcdAndLcm(m, n, gcdValue, lcm);
    cout << "���Լ��Ϊ: " << gcdValue << " ��С������Ϊ: " << lcm << endl;

    return 0;
}