#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

struct Student {
    char name[50];
    int numSubjects;
    int* scores;
};

double calculateAverage(Student& s) {
    int sum = 0;
    for (int i = 0; i < s.numSubjects; i++) {
        sum += s.scores[i];
    }
    return (double)sum / s.numSubjects;
}

bool compareStudents(Student& s1, Student& s2) {
    return calculateAverage(s1) > calculateAverage(s2);
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    
    Student* students = new Student[n];
    
    for (int i = 0; i < n; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        cin.ignore(); // to handle the leftover newline from previous input
        cin.getline(students[i].name, 50);
        
        cout << "Number of subjects: ";
        cin >> students[i].numSubjects;
        students[i].scores = new int[students[i].numSubjects];
        
        cout << "Enter scores: ";
        for (int j = 0; j < students[i].numSubjects; j++) {
            cin >> students[i].scores[j];
        }
    }
    
    sort(students, students + n, compareStudents);

    cout << "\nStudent details (sorted by average score):\n";
    for (int i = 0; i < n; i++) {
        cout << students[i].name << " - Average: " << calculateAverage(students[i]) << endl;
    }

    cout << "\nTop student: " << students[0].name << " with average " << calculateAverage(students[0]) << endl;

    for (int i = 0; i < n; i++) {
        delete[] students[i].scores;
    }
    delete[] students;
    
    return 0;
}

