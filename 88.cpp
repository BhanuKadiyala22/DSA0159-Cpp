#include <iostream>
using namespace std;

int main() {
    double num = 3.14159;
    double* ptr = &num; // Pointer to a double

    cout << "Value of num: " << *ptr << endl;
    cout << "Address of num: " << ptr << endl;

    return 0;
}
