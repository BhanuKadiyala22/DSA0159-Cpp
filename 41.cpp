#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 2, 5, 2, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value, count = 0;

    cout << "Enter the value to find occurrences: ";
    cin >> value;

    for (int i = 0; i < size; ++i) {
        if (arr[i] == value) {
            ++count;
        }
    }

    cout << "The value " << value << " occurs " << count << " times in the array." << endl;

    return 0;
}
