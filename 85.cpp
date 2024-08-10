#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int* ptr = &num; // Pointer to an integer

    cout << "Value of num: " << *ptr << endl;
    cout << "Address of num: " << ptr << endl;

    return 0;
}
