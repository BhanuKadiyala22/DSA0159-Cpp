#include <iostream>
#include <vector>
using namespace std;

// Function to add two vectors (arrays)
vector<int> add(const vector<int>& a, const vector<int>& b) {
    vector<int> result;
    if (a.size() != b.size()) {
        cout << "Error: Arrays must be of the same size." << endl;
        return result;
    }

    for (size_t i = 0; i < a.size(); ++i) {
        result.push_back(a[i] + b[i]);
    }
    return result;
}

// Function to add two matrices
vector<vector<int>> add(const vector<vector<int>>& a, const vector<vector<int>>& b) {
    vector<vector<int>> result;
    if (a.size() != b.size() || a[0].size() != b[0].size()) {
        cout << "Error: Matrices must be of the same size." << endl;
        return result;
    }

    result.resize(a.size(), vector<int>(a[0].size(), 0));
    for (size_t i = 0; i < a.size(); ++i) {
        for (size_t j = 0; j < a[i].size(); ++j) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
    return result;
}

int main() {
    vector<int> array1 = {1, 2, 3};
    vector<int> array2 = {4, 5, 6};
    vector<int> arraySum = add(array1, array2);

    cout << "Array Sum: ";
    for (int elem : arraySum) {
        cout << elem << " ";
    }
    cout << endl;

    vector<vector<int>> matrix1 = {{1, 2}, {3, 4}};
    vector<vector<int>> matrix2 = {{5, 6}, {7, 8}};
    vector<vector<int>> matrixSum = add(matrix1, matrix2);

    cout << "Matrix Sum:" << endl;
    for (const auto& row : matrixSum) {
        for (int elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}
