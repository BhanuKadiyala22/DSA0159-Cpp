#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    // Constructor
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // Overload the += operator
    Complex& operator+=(const Complex& other) {
        real += other.real;
        imag += other.imag;
        return *this;
    }

    // Function to display the complex number
    void display() const {
        cout << "Complex number: " << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(2.0, 3.0);
    Complex c2(1.0, 4.0);

    cout << "First ";
    c1.display();

    cout << "Second ";
    c2.display();

    c1 += c2;

    cout << "After += operation: ";
    c1.display();

    return 0;
}
