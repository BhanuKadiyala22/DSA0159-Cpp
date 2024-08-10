#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add two floating-point numbers
double add(double a, double b) {
    return a + b;
}

int main() {
    int intSum = add(3, 4);
    double doubleSum = add(3.5, 4.5);

    cout << "Sum of integers: " << intSum << endl;
    cout << "Sum of doubles: " << doubleSum << endl;

    return 0;
}
