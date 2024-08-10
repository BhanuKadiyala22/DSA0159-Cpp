#include <iostream>
#include <string>
using namespace std;

// Base class Employee
class Employee {
protected:
    string name;
    int id;
    double salary;

public:
    Employee(string n = "", int i = 0, double s = 0.0) : name(n), id(i), salary(s) {}

    void setName(string n) { name = n; }
    void setId(int i) { id = i; }
    void setSalary(double s) { salary = s; }

    string getName() const { return name; }
    int getId() const { return id; }
    double getSalary() const { return salary; }
};

// Derived class Manager
class Manager : public Employee {
private:
    string department;
    double bonus;

public:
    Manager(string n, int i, double s, string d, double b) : Employee(n, i, s), department(d), bonus(b) {}

    void setDepartment(string d) { department = d; }
    void setBonus(double b) { bonus = b; }

    string getDepartment() const { return department; }
    double getBonus() const { return bonus; }
};

// Derived class Engineer
class Engineer : public Employee {
private:
    string specialty;
    int hours;

public:
    Engineer(string n, int i, double s, string sp, int h) : Employee(n, i, s), specialty(sp), hours(h) {}

    void setSpecialty(string sp) { specialty = sp; }
    void setHours(int h) { hours = h; }

    string getSpecialty() const { return specialty; }
    int getHours() const { return hours; }
};

int main() {
    Manager myManager("Alice", 101, 75000.0, "IT", 5000.0);
    Engineer myEngineer("Bob", 102, 60000.0, "Software", 40);

    cout << "Manager Details:" << endl;
    cout << "Name: " << myManager.getName() << endl;
    cout << "ID: " << myManager.getId() << endl;
    cout << "Salary: " << myManager.getSalary() << endl;
    cout << "Department: " << myManager.getDepartment() << endl;
    cout << "Bonus: " << myManager.getBonus() << endl;

    cout << "\nEngineer Details:" << endl;
    cout << "Name: " << myEngineer.getName() << endl;
    cout << "ID: " << myEngineer.getId() << endl;
    cout << "Salary: " << myEngineer.getSalary() << endl;
    cout << "Specialty: " << myEngineer.getSpecialty() << endl;
    cout << "Hours: " << myEngineer.getHours() << endl;

    return 0;
}
