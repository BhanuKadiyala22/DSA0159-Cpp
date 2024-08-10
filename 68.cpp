#include <iostream>
using namespace std;

class Adder {
public:
    // Overload the () operator to add two integers
    int operator()(int a, int b) {
        return a + b;
    }

    // Overload the () operator to add two floating-point numbers
    double operator()(double a, double b) {
        return a + b;
    }
};

int main() {
    Adder add;

    int intResult = add(3, 4);
    double doubleResult = add(3.5, 4.5);

    cout << "Sum of integers: " << intResult << endl;
    cout << "Sum of doubles: " << doubleResult << endl;

    return 0;
}
