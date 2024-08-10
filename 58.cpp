#include <iostream>
using namespace std;

class Car {
private:
    string make;
    string model;
    int year;
    double mileage;

public:
    Car(string carMake, string carModel, int carYear, double carMileage) 
        : make(carMake), model(carModel), year(carYear), mileage(carMileage) {
        cout << "Car created: " << make << " " << model << ", Year: " << year << ", Mileage: " << mileage << " miles." << endl;
    }

    ~Car() {
        cout << "Car destroyed: " << make << " " << model << "." << endl;
    }

    void drive(double miles) {
        if (miles > 0) {
            mileage += miles;
            cout << "Driven " << miles << " miles. Total mileage: " << mileage << " miles." << endl;
        } else {
            cout << "Invalid mileage input." << endl;
        }
    }

    void displayCarDetails() const {
        cout << "Car Make: " << make << endl;
        cout << "Car Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Mileage: " << mileage << " miles" << endl;
    }
};

int main() {
    Car car("Toyota", "Corolla", 2020, 15000.0);
    car.displayCarDetails();
    car.drive(500.0);

    return 0;
}
