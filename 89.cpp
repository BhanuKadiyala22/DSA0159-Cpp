#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello, World!";
    string* ptr = &str; // Pointer to a string

    cout << "Value of str: " << *ptr << endl;
    cout << "Address of str: " << ptr << endl;

    return 0;
}
