#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    string major;
    double gpa;

public:
    Student(string studentName, int studentRollNumber, string studentMajor, double studentGPA) 
        : name(studentName), rollNumber(studentRollNumber), major(studentMajor), gpa(studentGPA) {
        cout << "Student created: " << name << ", Roll Number: " << rollNumber << "." << endl;
    }

    ~Student() {
        cout << "Student destroyed: " << name << ", Roll Number: " << rollNumber << "." << endl;
    }
    void displayStudentDetails() const {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Major: " << major << endl;
        cout << "GPA: " << gpa << endl;
    }
};

int main() {
    Student student("Alice Johnson", 123, "Computer Science", 3.8);
    student.displayStudentDetails();

    return 0;
}
