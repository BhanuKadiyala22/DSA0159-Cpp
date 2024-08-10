#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the size of the square matrix: ";
    cin >> size;

    int matrix[10][10];
    int mainDiagonalSum = 0, secondaryDiagonalSum = 0;

    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < size; ++i) {
        mainDiagonalSum += matrix[i][i];
        secondaryDiagonalSum += matrix[i][size - i - 1];
    }

    cout << "Sum of main diagonal: " << mainDiagonalSum << endl;
    cout << "Sum of secondary diagonal: " << secondaryDiagonalSum << endl;

    return 0;
}
