#include <iostream>
using namespace std;

void transposeMatrix(int *matrix, int rows, int cols) {
    cout << "Transposed Matrix:" << endl;
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            cout << *(matrix + i * cols + j) << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows = 3, cols = 2;
    int *matrix = new int[rows * cols];

    cout << "Enter elements for a " << rows << "x" << cols << " matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> *(matrix + i * cols + j);
        }
    }

    cout << "Original Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << *(matrix + i * cols + j) << " ";
        }
        cout << endl;
    }

    transposeMatrix(matrix, rows, cols);

    delete[] matrix;

    return 0;
}

