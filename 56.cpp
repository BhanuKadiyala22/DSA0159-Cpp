#include <iostream>
#include <cmath>
using namespace std;
double areaOfCircle(double radius) {
    const double pi = 3.14159;
    return pi * pow(radius, 2);
}

int main() {
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    cout << "Area of the circle: " << areaOfCircle(radius) << endl;

    return 0;
}
