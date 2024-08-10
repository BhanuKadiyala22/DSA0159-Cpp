#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double rectLength, double rectWidth) 
        : length(rectLength), width(rectWidth) {
        cout << "Rectangle created with length " << length << " and width " << width << "." << endl;
    }

    // Destructor
    ~Rectangle() {
        cout << "Rectangle destroyed." << endl;
    }

    double calculateArea() const {
        return length * width;
    }

    double calculatePerimeter() const {
        return 2 * (length + width);
    }
    void displayRectangleDetails() const {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};

int main() {
    Rectangle rect(5.0, 3.0);
    rect.displayRectangleDetails();

    return 0;
}
