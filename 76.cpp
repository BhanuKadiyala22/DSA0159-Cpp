#include <iostream>
using namespace std;

// Function to find the factorial of an integer
int factorial(int n) {
    if (n < 0) {
        cout << "Error: Factorial of a negative number doesn't exist." << endl;
        return -1;
    }
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Function to find the factorial of a floating-point number
double factorial(double n) {
    if (n < 0.0) {
        cout << "Error: Factorial of a negative number doesn't exist." << endl;
        return -1.0;
    }
    double result = 1.0;
    for (int i = 2; i <= static_cast<int>(n); ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int intFactorial = factorial(5);
    double doubleFactorial = factorial(5.5);

    cout << "Factorial of 5 (int): " << intFactorial << endl;
    cout << "Factorial of 5.5 (double, only integer part considered): " << doubleFactorial << endl;

    return 0;
}
