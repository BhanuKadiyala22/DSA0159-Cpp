#include <iostream>
#include <string>
using namespace std;

// Base class Vehicle
class Vehicle {
protected:
    string make;
    string model;
    int year;

public:
    Vehicle(string m = "", string mod = "", int y = 0) : make(m), model(mod), year(y) {}

    void setMake(string m) { make = m; }
    void setModel(string mod) { model = mod; }
    void setYear(int y) { year = y; }

    string getMake() const { return make; }
    string getModel() const { return model; }
    int getYear() const { return year; }
};

// Derived class Car
class Car : public Vehicle {
private:
    int seatingCapacity;
    string fuelType;

public:
    Car(string m, string mod, int y, int sc, string ft) : Vehicle(m, mod, y), seatingCapacity(sc), fuelType(ft) {}

    void setSeatingCapacity(int sc) { seatingCapacity = sc; }
    void setFuelType(string ft) { fuelType = ft; }

    int getSeatingCapacity() const { return seatingCapacity; }
    string getFuelType() const { return fuelType; }
};

// Derived class Truck
class Truck : public Vehicle {
private:
    double payloadCapacity;
    double towingCapacity;

public:
    Truck(string m, string mod, int y, double pc, double tc) : Vehicle(m, mod, y), payloadCapacity(pc), towingCapacity(tc) {}

    void setPayloadCapacity(double pc) { payloadCapacity = pc; }
    void setTowingCapacity(double tc) { towingCapacity = tc; }

    double getPayloadCapacity() const { return payloadCapacity; }
    double getTowingCapacity() const { return towingCapacity; }
};

int main() {
    Car myCar("Toyota", "Camry", 2021, 5, "Petrol");
    Truck myTruck("Ford", "F-150", 2022, 1500.0, 5000.0);

    cout << "Car Details:" << endl;
    cout << "Make: " << myCar.getMake() << endl;
    cout << "Model: " << myCar.getModel() << endl;
    cout << "Year: " << myCar.getYear() << endl;
    cout << "Seating Capacity: " << myCar.getSeatingCapacity() << endl;
    cout << "Fuel Type: " << myCar.getFuelType() << endl;

    cout << "\nTruck Details:" << endl;
    cout << "Make: " << myTruck.getMake() << endl;
    cout << "Model: " << myTruck.getModel() << endl;
    cout << "Year: " << myTruck.getYear() << endl;
    cout << "Payload Capacity: " << myTruck.getPayloadCapacity() << endl;
    cout << "Towing Capacity: " << myTruck.getTowingCapacity() << endl;

    return 0;
}
