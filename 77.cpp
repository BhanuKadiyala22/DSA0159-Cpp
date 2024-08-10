#include <iostream>
#include <algorithm>
using namespace std;

// Function to sort an integer array
void sortArray(int arr[], int size) {
    sort(arr, arr + size);
}

// Function to sort a double array
void sortArray(double arr[], int size) {
    sort(arr, arr + size);
}

int main() {
    int intArray[] = {3, 1, 4, 5, 2};
    double doubleArray[] = {3.3, 1.1, 4.4, 5.5, 2.2};

    sortArray(intArray, 5);
    sortArray(doubleArray, 5);

    cout << "Sorted Integer Array: ";
    for (int elem : intArray) {
        cout << elem << " ";
    }
    cout << endl;

    cout << "Sorted Double Array: ";
    for (double elem : doubleArray) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
