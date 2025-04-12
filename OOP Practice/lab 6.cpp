#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    string rollno;
    int marks[3];

    void input(int index) {
        cin.ignore();
        cout << "\nEnter details for Student " << index + 1 << ":\n";
        cout << "Name: ";
        getline(cin, name);
        cout << "Roll Number: ";
        getline(cin, rollno);
        cout << "Enter marks for three subjects:\n";
        for (int i = 0; i < 3; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void display(int index) {
        cout << "\nDetails of Student " << index + 1 << ":\n";
        cout << "Name: " << name << "\n";
        cout << "Roll No: " << rollno << "\n";
        cout << "Marks:\n";
        for (int i = 0; i < 3; i++) {
            cout << "Subject " << i + 1 << ": " << marks[i] << endl;
        }
    }

    int average() {
        int sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += marks[i];
        }
        return sum / 3;
    }
};

int main() {
    const int numStudents = 10;
    Student* students = new Student[numStudents];
    int* avgArray = new int[numStudents];

    cout << "Enter student details:\n";
    for (int i = 0; i < numStudents; i++) {
        students[i].input(i);
    }

    cout << "\nDisplaying Student Details:\n";
    for (int i = 0; i < numStudents; i++) {
        students[i].display(i);
    }

    int highestAvg = 0, topStudentIndex = 0;
    for (int i = 0; i < numStudents; i++) {
        avgArray[i] = students[i].average();
        if (avgArray[i] > highestAvg) {
            highestAvg = avgArray[i];
            topStudentIndex = i;
        }
    }

    cout << "\nTop Scoring Student:\n";
    students[topStudentIndex].display(topStudentIndex);
    cout << "Highest Average Marks: " << highestAvg << "\n";

    delete[] students;
    delete[] avgArray;

    return 0;
}


