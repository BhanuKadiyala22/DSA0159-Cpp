#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    cout << "Enter an integer to check if it is a narcissistic number: ";
    cin >> num;

    originalNum = num;
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if (static_cast<int>(result) == num) {
        cout << num << " is a narcissistic number." << endl;
    } else {
        cout << num << " is not a narcissistic number." << endl;
    }

    return 0;
}
