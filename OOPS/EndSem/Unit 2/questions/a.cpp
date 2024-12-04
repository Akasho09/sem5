#include <iostream>
using namespace std;

class Matrix {
private:
    int mat[3][3]; // 3x3 integer array

public:
    // Constructor to initialize matrix elements to 0
    Matrix() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                mat[i][j] = 0;
            }
        }
    }

    // Function to input matrix elements
    void inputMatrix() {
        cout << "Enter elements of the 3x3 matrix row by row:\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> mat[i][j];
            }
        }
    }

    // Function to display the matrix
    void displayMatrix() const {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Friend function to multiply two matrices
    friend Matrix multiplyMatrices(const Matrix &m1, const Matrix &m2);
};

// Function to multiply two matrices
Matrix multiplyMatrices(const Matrix &m1, const Matrix &m2) {
    Matrix result; // Resultant matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                result.mat[i][j] += m1.mat[i][k] * m2.mat[k][j];
            }
        }
    }
    return result;
}

int main() {
    Matrix mat1, mat2, result;

    cout << "Matrix 1:\n";
    mat1.inputMatrix();

    cout << "Matrix 2:\n";
    mat2.inputMatrix();

    // Multiply the two matrices
    result = multiplyMatrices(mat1, mat2);

    // Display the result
    cout << "Resultant Matrix after multiplication:\n";
    result.displayMatrix();

    return 0;
}
