#include <iostream>
using namespace std;

// Function to reverse an array
void reverse_array(int* arr, int length) {
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        int temp = arr[i];  
        arr[i] = arr[j];
        arr[j] = temp;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to find the second largest number in an array
int secondlargest(int* arr, int length) {
    int largest = INT_MIN, secondLargest = INT_MIN;

    for (int i = 0; i < length; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

// Function to rotate the array by k positions
void rotate_array(int* arr, int length) {
    int k;
    cout << "Enter the number of positions to rotate: ";
    cin >> k;
    k = k % length;  // Handle cases where k >= length

    int* temp = new int[k];

    // Copy first k elements to temp
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }

    // Shift elements left
    for (int i = 0; i < length - k; i++) {
        arr[i] = arr[i + k];
    }

    for (int i = 0; i < k; i++) {
        arr[length - k + i] = temp[i];
    }

    delete[] temp; // Free allocated memory

    cout << "Array after rotating by " << k << " positions: ";
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int length = 10;
    int* arr = new int[length];

    cout << "Enter 10 elements of the array: ";
    for (int i = 0; i < length; i++) {
        cin >> arr[i];
    }

    // Reverse function call
    reverse_array(arr, length);

    // 2nd largest function call
    int seclargest = secondlargest(arr, length);
    cout << "The 2nd largest number in the array: " << seclargest << endl;

    // Rotate array function call
    rotate_array(arr, length);

    delete[] arr; // Free allocated memory
    return 0;
}

