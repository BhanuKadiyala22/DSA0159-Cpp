#include <iostream>
#include <cmath>
using namespace std;

// Function to find the absolute value of an integer
int absolute(int n) {
    return abs(n);
}

// Function to find the absolute value of a floating-point number
double absolute(double n) {
    return fabs(n);
}

int main() {
    int intAbs = absolute(-5);
    double doubleAbs = absolute(-3.7);

    cout << "Absolute value of -5 (int): " << intAbs << endl;
    cout << "Absolute value of -3.7 (double): " << doubleAbs << endl;

    return 0;
}
