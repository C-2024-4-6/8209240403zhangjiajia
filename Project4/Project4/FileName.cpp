#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    double fahrenheit, celsius;
    cout << "请输入华氏温度: ";
    cin >> fahrenheit;
    celsius = 5.0 / 9.0 * (fahrenheit - 32);
    cout << fixed << setprecision(2);
    cout << "摄氏温度是: " << celsius << endl;

    return 0;
}