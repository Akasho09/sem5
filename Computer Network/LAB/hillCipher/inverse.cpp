#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

// Function to display the matrix
void displayMatrix(const vector<vector<double>>& matrix) {
    int n = matrix.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(10) << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to find the inverse of a matrix
bool invertMatrix(vector<vector<double>>& matrix) {
    int n = matrix.size();
    
    // Create an identity matrix
    vector<vector<double>> inverse(n, vector<double>(n, 0));
    for (int i = 0; i < n; i++) {
        inverse[i][i] = 1;
    }

    // Perform Gaussian elimination
    for (int i = 0; i < n; i++) {
        // Make the diagonal element 1
        double diag = matrix[i][i];
        if (diag == 0) {
            // If the diagonal element is zero, matrix is singular and not invertible
            cout << "Matrix is singular and cannot be inverted." << endl;
            return false;
        }

        for (int j = 0; j < n; j++) {
            matrix[i][j] /= diag;
            inverse[i][j] /= diag;
        }

        // Make all elements in the current column except the pivot 0
        for (int k = 0; k < n; k++) {
            if (k != i) {
                double factor = matrix[k][i];
                for (int j = 0; j < n; j++) {
                    matrix[k][j] -= factor * matrix[i][j];
                    inverse[k][j] -= factor * inverse[i][j];
                }
            }
        }
    }

    // Copy the result into the original matrix
    matrix = inverse;
    return true;
}

int main() {
    int n;
    cout << "Enter the dimension of the matrix (n x n): ";
    cin >> n;

    vector<vector<double>> matrix(n, vector<double>(n));
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nOriginal Matrix:\n";
    displayMatrix(matrix);

    if (invertMatrix(matrix)) {
        cout << "\nInverse Matrix:\n";
        displayMatrix(matrix);
    } else {
        cout << "\nThe matrix does not have an inverse." << endl;
    }

    return 0;
}
