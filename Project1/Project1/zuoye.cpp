#include <iostream>
#include<cmath>
using namespace std;
const double PI = 3.14159;
int main() {
    double radius, height, volume;
    cout << "请输入圆锥底的半径: ";
    cin >> radius;
    cout << "请输入圆锥的高: ";
    cin >> height;
    volume = (1.0 / 3) * PI * pow(radius, 2) * height;
    cout << "圆锥的体积是: " << volume << endl;

    return 0;
}




























































