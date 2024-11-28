#include "mytemperature.h"

double celsius_to_fah(double cel) {
    return cel * 9 / 5.0 + 32;
}
double fahrenheit_to_cels(double fah) {
    return (fah - 32) * 5 / 9.0;
}
#include <iostream>
#include <iomanip>
#include "mytemperature.h"
using namespace std;

int main() {
    cout << "Celsius\tFahrenheit\t|\tFahrenheit\tCelsius" << endl;
   
    for (double c = 40.0; c >= 31.0; c -= 1.0) {
        double f = celsius_to_fah(c);
        cout << fixed << setprecision(1) << c << "\t" << f << "\t\t|\t";
        double other_f = 120.0 - (40.0 - c) * 10.0;
        double other_c = fahrenheit_to_cels(other_f);
        cout << fixed << setprecision(2) << other_f << "\t\t" << other_c << endl;
    }
    return 0;
}