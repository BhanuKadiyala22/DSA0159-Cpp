#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate power of an integer
int power(int base, int exponent) {
    return static_cast<int>(pow(base, exponent));
}

// Function to calculate power of a floating-point number
double power(double base, double exponent) {
    return pow(base, exponent);
}

int main() {
    int intPower = power(2, 3);
    double doublePower = power(2.5, 3.5);

    cout << "2^3 (int): " << intPower << endl;
    cout << "2.5^3.5 (double): " << doublePower << endl;

    return 0;
}
