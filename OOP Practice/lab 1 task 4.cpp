#include <iostream>
using namespace std;

void input_data(int arr[10][3], char str[10][100], int roll_num[10]);
void avg(int arr[10][3]);
void highest_marks(int arr[10][3], char str[10][100], int roll_num[10]);

int main() {
    int arr[10][3];
    char str[10][100];
    int roll_num[10];

    cout << "Welcome to Student Information Centre:" << endl;

    input_data(arr, str, roll_num);
    avg(arr);
    highest_marks(arr, str, roll_num);

    return 0;
}
// function to input student's data
void input_data(int arr[10][3], char str[10][100], int roll_num[10]) {
    cout << "Enter student details:" << endl;

    for (int i = 0; i < 10; i++) {
        cout << "\nEnter name for student " << i + 1 << ": ";
        cin >> ws;
        cin.getline(str[i], 100);

        cout << "Enter roll number for student " << i + 1 << ": ";
        cin >> roll_num[i];

        cout << "Enter marks in 3 subjects: ";
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }
}
// funcgion to find avg of students
void avg(int arr[10][3]) {
    cout << "\nAverage Marks of Each Student:\n";
    for (int i = 0; i < 10; i++) {
        int total = 0;
        for (int j = 0; j < 3; j++) {
            total += arr[i][j];
        }
        float average = total / 3.0;
        cout << "Student " << i + 1 << " Average Marks: " << average << endl;
    }
}
// this function to display the highest marks scored
void highest_marks(int arr[10][3], char str[10][100], int roll_num[10]) {
    int max_total = 0, top_student = 0;

    for (int i = 0; i < 10; i++) {
        int total = 0;
        for (int j = 0; j < 3; j++) {
            total += arr[i][j];
        }
        if (total > max_total) {
            max_total = total;
            top_student = i;
        }
    }

    cout << "\nTop Scorer: " << str[top_student]
         << " (Roll No: " << roll_num[top_student] << ")"
         << " with total marks: " << max_total << endl;
}

