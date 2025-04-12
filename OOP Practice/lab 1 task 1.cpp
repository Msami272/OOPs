#include<iostream>
using namespace std;

// Function to find the unique numbers
void unique_numbers(int arr[], int size) {
    int arr2[25];
    int uniqueCount = 0;

    for (int i = 0; i < size; i++) {
        bool isUnique = true;


        for (int j = 0; j < uniqueCount; j++) {
            if (arr[i] == arr2[j]) {
                isUnique = false;
                break;
            }
        }


        if (isUnique) {
            arr2[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }


    cout << "The unique numbers in the array are: " << endl;
    for (int i = 0; i < uniqueCount; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[25];
    int size = 25;

    cout << "Enter elements from 10 to 100 in array: " << endl;

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }


    unique_numbers(arr, size);

    return 0;
}

