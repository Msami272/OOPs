#include <iostream>
using namespace std;

// Recursive function to calculate the sum of array elements
int sumArray(int arr[], int size) {
    if (size == 0) return 0;
    return arr[size - 1] + sumArray(arr, size - 1);
}

// Recursive function to calculate factorial
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Sum of array: " << sumArray(arr, 5) << endl;
    cout << "Factorial of 5: " << factorial(5) << endl;

    return 0;
}

