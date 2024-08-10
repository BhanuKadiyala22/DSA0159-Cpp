#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num;

    cout << "Enter a floating-point number: ";
    cin >> num;

    cout << "Using floor: " << floor(num) << endl;
    cout << "Using ceil: " << ceil(num) << endl;
    cout << "Rounded to the nearest integer: " << round(num) << endl;

    return 0;
}
