#include <iostream>
#include <vector>
using namespace std;

class Matrix {
private:
    vector<vector<int>> data;
    int rows, cols;

public:
    // Constructor
    Matrix(int r, int c) : rows(r), cols(c) {
        data.resize(rows, vector<int>(cols, 0));
    }

    // Function to set matrix data
    void setData(const vector<vector<int>>& matrixData) {
        data = matrixData;
    }

    // Overload the * operator for matrix multiplication
    Matrix operator*(const Matrix& other) const {
        if (cols != other.rows) {
            throw invalid_argument("Matrix dimensions do not match for multiplication.");
        }

        Matrix result(rows, other.cols);

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < other.cols; ++j) {
                for (int k = 0; k < cols; ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }

        return result;
    }

    // Function to display matrix data
    void display() const {
        for (const auto& row : data) {
            for (int elem : row) {
                cout << elem << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Matrix m1(2, 3);
    Matrix m2(3, 2);

    m1.setData({{1, 2, 3}, {4, 5, 6}});
    m2.setData({{7, 8}, {9, 10}, {11, 12}});

    try {
        Matrix result = m1 * m2;

        cout << "Matrix 1:" << endl;
        m1.display();

        cout << "Matrix 2:" << endl;
        m2.display();

        cout << "Result of multiplication:" << endl;
        result.display();
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
