#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    double celsius, fahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    cout << "Temperature in Fahrenheit: " << celsiusToFahrenheit(celsius) << endl;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
    cout << "Temperature in Celsius: " << fahrenheitToCelsius(fahrenheit) << endl;

    return 0;
}
