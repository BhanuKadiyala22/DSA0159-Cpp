#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1, 2, 3, 4, 5}; 
    int size = 5;                  
    int element, position;

    cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter the element to insert: ";
    cin >> element;

    cout << "Enter the position to insert the element (0 to " << size << "): ";
    cin >> position;

    if (position < 0 || position > size) {
        cout << "Invalid position!" << endl;
    } else {
        for (int i = size; i > position; --i) {
            arr[i] = arr[i - 1];
        }

        arr[position] = element;
        ++size;

        cout << "Array after insertion: ";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
