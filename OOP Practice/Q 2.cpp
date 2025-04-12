#include <iostream>
using namespace std;

// Student information
struct Student {
    string name;
    int id;
    float grade;
};

// Course with student list
struct Course {
    string name;
    Student students[100];  // Array of students (max 100)
    int studentCount = 0;   // Track number of students
};

Course myCourse;  // Our single course

// Utility function to clear input buffer
void clearInput() {
    cin.clear();
    while (cin.get() != '\n');
}

// Add new student to course
void addStudent() {
    if (myCourse.studentCount >= 100) {
        cout << "Course full!\n";
        return;
    }
    cin.ignore(); // Clear buffer before using getline
    cout << "Name: ";
    getline(cin, myCourse.students[myCourse.studentCount].name);
    
    cout << "ID: ";
    while (!(cin >> myCourse.students[myCourse.studentCount].id)) {
        cout << "Invalid input! Enter an integer for ID: ";
        clearInput();
    }
    
    cout << "Grade: ";
    while (!(cin >> myCourse.students[myCourse.studentCount].grade)) {
        cout << "Invalid input! Enter a number for Grade: ";
        clearInput();
    }
    
    myCourse.studentCount++;
    cout << "Student added!\n";
}

// Display all students
void viewStudents() {
    if (myCourse.studentCount == 0) {
        cout << "No students enrolled!\n";
        return;
    }
    cout << "\nStudents in " << myCourse.name << ":\n";
    for (int i = 0; i < myCourse.studentCount; i++) {
        cout << i + 1 << ". " << myCourse.students[i].name 
             << " (ID: " << myCourse.students[i].id 
             << ", Grade: " << myCourse.students[i].grade << ")\n";
    }
}

// Update student grade
void updateGrade() {
    int id;
    cout << "Enter student ID: ";
    while (!(cin >> id)) {
        cout << "Invalid input! Enter an integer for ID: ";
        clearInput();
    }
    
    for (int i = 0; i < myCourse.studentCount; i++) {
        if (myCourse.students[i].id == id) {
            cout << "New grade: ";
            while (!(cin >> myCourse.students[i].grade)) {
                cout << "Invalid input! Enter a number for Grade: ";
                clearInput();
            }
            cout << "Grade updated!\n";
            return;
        }
    }
    cout << "Student not found!\n";
}

// Remove student from course
void removeStudent() {
    int id;
    cout << "Enter student ID: ";
    while (!(cin >> id)) {
        cout << "Invalid input! Enter an integer for ID: ";
        clearInput();
    }
    
    for (int i = 0; i < myCourse.studentCount; i++) {
        if (myCourse.students[i].id == id) {
            for (int j = i; j < myCourse.studentCount - 1; j++) {
                myCourse.students[j] = myCourse.students[j + 1];
            }
            myCourse.studentCount--;
            cout << "Student removed!\n";
            return;
        }
    }
    cout << "Student not found!\n";
}

int main() {
    cout << "Course Manager\n";
    cout << "Enter course name: ";
    getline(cin, myCourse.name);
    
    while (true) {
        cout << "\n---- " << myCourse.name << " Management ----\n";
        cout << "1. Add Student\n2. View Students\n3. Update Grade\n4. Remove Student\n5. Exit\nChoice: ";
        
        int choice;
        if (!(cin >> choice)) {
            cout << "Invalid choice! Enter a number.\n";
            clearInput();
            continue;
        }
        
        switch (choice) {
            case 1: addStudent(); break;
            case 2: viewStudents(); break;
            case 3: updateGrade(); break;
            case 4: removeStudent(); break;
            case 5: return 0;
            default: cout << "Invalid option! Try again.\n";
        }
    }
}

