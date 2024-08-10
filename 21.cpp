#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter two integers to find their GCD: ";
    cin >> num1 >> num2;

    int gcd, remainder;
    do {
        remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    } while (remainder != 0);

    gcd = num1;

    cout << "The GCD is: " << gcd << endl;

    return 0;
}
