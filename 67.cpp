#include <iostream>
#include <stdexcept>
using namespace std;

class IntArray {
private:
    int* data;
    int size;

public:
    // Constructor
    IntArray(int arraySize) : size(arraySize) {
        data = new int[size];
        for (int i = 0; i < size; ++i) {
            data[i] = 0;  // Initialize array elements to 0
        }
    }

    // Destructor
    ~IntArray() {
        delete[] data;
    }

    // Overload the [] operator
    int& operator[](int index) {
        if (index < 0 || index >= size) {
            throw out_of_range("Index out of bounds.");
        }
        return data[index];
    }

    // Function to display array elements
    void display() const {
        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    IntArray arr(5);

    // Set values using overloaded []
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    // Display array elements
    cout << "Array elements: ";
    arr.display();

    // Access a specific element
    cout << "Element at index 2: " << arr[2] << endl;

    // Test out of bounds access
    try {
        cout << "Element at index 5: " << arr[5] << endl;
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
