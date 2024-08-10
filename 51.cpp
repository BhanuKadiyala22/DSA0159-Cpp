#include <iostream>
#include <climits>
using namespace std;
int findMin(const int arr[], int size) {
    int min = INT_MAX;
    for (int i = 0; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
int findMax(const int arr[], int size) {
    int max = INT_MIN;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {3, 1, 4, 1, 5, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Minimum element: " << findMin(arr, size) << endl;
    cout << "Maximum element: " << findMax(arr, size) << endl;

    return 0;
}
