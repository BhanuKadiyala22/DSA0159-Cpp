#include <iostream>
using namespace std;

int main() {
    char arr[] = {'H', 'e', 'l', 'l', 'o'};
    char* ptr = arr; // Pointer to the first element of the character array

    cout << "Character array elements: ";
    for (int i = 0; i < 5; ++i) {
        cout << *(ptr + i) << " "; // Access array elements through the pointer
    }
    cout << endl;

    return 0;
}
