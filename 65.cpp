#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;

public:
    // Constructor
    Student(string studentName, int studentRollNumber)
        : name(studentName), rollNumber(studentRollNumber) {}

    // Overload the == operator
    bool operator==(const Student& other) const {
        return (name == other.name && rollNumber == other.rollNumber);
    }
};

int main() {
    Student s1("Alice", 101);
    Student s2("Bob", 102);
    Student s3("Alice", 101);

    if (s1 == s2) {
        cout << "Student 1 and Student 2 are equal." << endl;
    } else {
        cout << "Student 1 and Student 2 are not equal." << endl;
    }

    if (s1 == s3) {
        cout << "Student 1 and Student 3 are equal." << endl;
    } else {
        cout << "Student 1 and Student 3 are not equal." << endl;
    }

    return 0;
}
