#include <iostream>
using namespace std;

int main() {
    int rowsA, colsA, rowsB, colsB;

    cout << "Enter rows and columns for matrix A: ";
    cin >> rowsA >> colsA;

    cout << "Enter rows and columns for matrix B: ";
    cin >> rowsB >> colsB;

    if (colsA != rowsB) {
        cout << "Matrices cannot be multiplied!" << endl;
        return 0;
    }

    int A[rowsA][colsA], B[rowsB][colsB], C[rowsA][colsB];

    cout << "Enter elements of matrix A:" << endl;
    for (int i = 0; i < rowsA; i++)
        for (int j = 0; j < colsA; j++)
            cin >> A[i][j];

    cout << "Enter elements of matrix B:" << endl;
    for (int i = 0; i < rowsB; i++)
        for (int j = 0; j < colsB; j++)
            cin >> B[i][j];

    // Matrix multiplication
    for (int i = 0; i < rowsA; i++)
        for (int j = 0; j < colsB; j++) {
            C[i][j] = 0;
            for (int k = 0; k < colsA; k++)
                C[i][j] += A[i][k] * B[k][j];
        }

    cout << "Product matrix C:" << endl;
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}

