#include <iostream>
using namespace std;

int main() {
    char ch = 'A';
    char* ptr = &ch; // Pointer to a char

    cout << "Value of ch: " << *ptr << endl;
    cout << "Address of ch: " << (void*)ptr << endl;

    return 0;
}
