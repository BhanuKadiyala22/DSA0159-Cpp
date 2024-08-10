#include <iostream>
using namespace std;

// Base class Shape
class Shape {
protected:
    double height;
    double width;

public:
    Shape(double h = 0.0, double w = 0.0) : height(h), width(w) {}

    virtual double area() const = 0; // Pure virtual function
    virtual double perimeter() const = 0; // Pure virtual function
};

// Derived class Rectangle
class Rectangle : public Shape {
public:
    Rectangle(double h, double w) : Shape(h, w) {}

    double area() const override {
        return height * width;
    }

    double perimeter() const override {
        return 2 * (height + width);
    }
};

// Derived class Triangle
class Triangle : public Shape {
public:
    Triangle(double h, double w) : Shape(h, w) {}

    double area() const override {
        return 0.5 * height * width;
    }

    double perimeter() const override {
        // Assuming an isosceles triangle for simplicity
        double hypotenuse = sqrt((height * height) + (width * width) / 4);
        return width + 2 * hypotenuse;
    }
};

int main() {
    Rectangle rect(4.0, 5.0);
    Triangle tri(4.0, 5.0);

    cout << "Rectangle area: " << rect.area() << endl;
    cout << "Rectangle perimeter: " << rect.perimeter() << endl;

    cout << "Triangle area: " << tri.area() << endl;
    cout << "Triangle perimeter: " << tri.perimeter() << endl;

    return 0;
}
