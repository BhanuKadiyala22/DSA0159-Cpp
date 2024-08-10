#include <iostream>
using namespace std;

int main() {
    float num = 5.5;
    float* ptr = &num; // Pointer to a float

    cout << "Value of num: " << *ptr << endl;
    cout << "Address of num: " << ptr << endl;

    return 0;
}
