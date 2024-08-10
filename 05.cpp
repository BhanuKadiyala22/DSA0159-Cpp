#include <iostream>
using namespace std;

int main() {
    double num1, num2;

    cout << "Enter two floating-point numbers: ";
    cin >> num1 >> num2;

    cout << "Addition: " << num1 + num2 << endl;
    cout << "Subtraction: " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 * num2 << endl;
    if (num2 != 0.0) {
        cout << "Division: " << num1 / num2 << endl;
    } else {
        cout << "Division: Undefined (division by zero)" << endl;
    }

    return 0;
}
