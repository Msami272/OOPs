#include <iostream>
#include <cstdlib>
using namespace std;

void displayMatrix(int **matrix, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

int mainDiagonalSum(int **matrix, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }
    return sum;
}

int secondaryDiagonalSum(int **matrix, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += matrix[i][n - 1 - i];
    }
    return sum;
}

int main() {
    int n;

    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;

    int **matrix = new int*[n];
    
    // Input matrix elements from the user
    cout << "Enter matrix elements (row by row):\n";
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Display the matrix
    cout << "\nMatrix:\n";
    displayMatrix(matrix, n);

    // Calculate the sum of diagonals
    int mainSum = mainDiagonalSum(matrix, n);
    int secSum = secondaryDiagonalSum(matrix, n);
    int absDiff = abs(mainSum - secSum);

    // Output the results
    cout << "\nMain Diagonal Sum: " << mainSum;
    cout << "\nSecondary Diagonal Sum: " << secSum;
    cout << "\nAbsolute Difference: " << absDiff << endl;

    // Clean up memory
    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}

