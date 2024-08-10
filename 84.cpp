#include <iostream>
#include <string>
using namespace std;

// Base class Person
class Person {
protected:
    string name;
    int age;
    string gender;

public:
    Person(string n = "", int a = 0, string g = "") : name(n), age(a), gender(g) {}

    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }
    void setGender(string g) { gender = g; }

    string getName() const { return name; }
    int getAge() const { return age; }
    string getGender() const { return gender; }
};

// Derived class Student
class Student : public Person {
private:
    int rollNumber;
    string className;

public:
    Student(string n, int a, string g, int r, string c) : Person(n, a, g), rollNumber(r), className(c) {}

    void setRollNumber(int r) { rollNumber = r; }
    void setClassName(string c) { className = c; }

    int getRollNumber() const { return rollNumber; }
    string getClassName() const { return className; }
};

// Derived class Teacher
class Teacher : public Person {
private:
    string subject;
    double salary;

public:
    Teacher(string n, int a, string g, string s, double sal) : Person(n, a, g), subject(s), salary(sal) {}

    void setSubject(string s) { subject = s; }
    void setSalary(double sal) { salary = sal; }

    string getSubject() const { return subject; }
    double getSalary() const { return salary; }
};

int main() {
    Student myStudent("John", 20, "Male", 101, "Physics");
    Teacher myTeacher("Ms. Smith", 35, "Female", "Mathematics", 50000.0);

    cout << "Student Details:" << endl;
    cout << "Name: " << myStudent.getName() << endl;
    cout << "Age: " << myStudent.getAge() << endl;
    cout << "Gender: " << myStudent.getGender() << endl;
    cout << "Roll Number: " << myStudent.getRollNumber() << endl;
    cout << "Class: " << myStudent.getClassName() << endl;

    cout << "\nTeacher Details:" << endl;
    cout << "Name: " << myTeacher.getName() << endl;
    cout << "Age: " << myTeacher.getAge() << endl;
    cout << "Gender: " << myTeacher.getGender() << endl;
    cout << "Subject: " << myTeacher.getSubject() << endl;
    cout << "Salary: " << myTeacher.getSalary() << endl;

    return 0;
}
