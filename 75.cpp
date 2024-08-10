#include <iostream>
using namespace std;

// Function to print an integer array
void printArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to print a double array
void printArray(const double arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to print a character array
void printArray(const char arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charArray[] = {'H', 'e', 'l', 'l', 'o'};

    cout << "Integer Array: ";
    printArray(intArray, 5);

    cout << "Double Array: ";
    printArray(doubleArray, 5);

    cout << "Character Array: ";
    printArray(charArray, 5);

    return 0;
}
