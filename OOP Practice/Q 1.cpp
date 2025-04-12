#include <iostream>
#include <string>
using namespace std;

// Doctor details
struct Doctor {
    string name;
    string specialty;
};

// Patient details (includes doctor)
struct Patient {
    string name;
    int id;
    Doctor doctor;
};

// Hospital with patients
struct Hospital {
    Patient* patients;  // Dynamic array
    int count = 0;      // Current patients
    int capacity = 10;  // Max patients
};

// Function to add a patient
void addPatient(Hospital* h) {
    if (h->count >= h->capacity) {
        cout << "Hospital full!\n";
        return;
    }

    cout << "Enter patient name: ";
    cin >> h->patients[h->count].name;
    
    cout << "Enter patient ID: ";
    cin >> h->patients[h->count].id;
    
    cout << "Enter doctor name: ";
    cin >> h->patients[h->count].doctor.name;
    
    cout << "Enter doctor specialty: ";
    cin >> h->patients[h->count].doctor.specialty;

    h->count++;
    cout << "Patient added!\n";
}

// Function to show all patients
void showPatients(Hospital* h) {
    if (h->count == 0) {
        cout << "No patients!\n";
        return;
    }

    cout << "\nCurrent Patients:\n";
    for (int i = 0; i < h->count; i++) {
        cout << h->patients[i].name << " (ID: " << h->patients[i].id << ")\n";
        cout << "  Doctor: " << h->patients[i].doctor.name;
        cout << " (" << h->patients[i].doctor.specialty << ")\n\n";
    }
}

// Function to remove a patient
void removePatient(Hospital* h, int id) {
    for (int i = 0; i < h->count; i++) {
        if (h->patients[i].id == id) {
            // Shift all patients after this one
            for (int j = i; j < h->count-1; j++) {
                h->patients[j] = h->patients[j+1];
            }
            h->count--;
            cout << "Patient removed!\n";
            return;
        }
    }
    cout << "Patient not found!\n";
}

int main() {
    Hospital myHospital;
    myHospital.patients = new Patient[myHospital.capacity];

    while (true) {
        cout << "\n1. Add Patient\n2. View Patients\n3. Remove Patient\n4. Exit\n";
        cout << "Choose: ";
        
        int choice;
        cin >> choice;

        if (choice == 1) {
            addPatient(&myHospital);
        }
        else if (choice == 2) {
            showPatients(&myHospital);
        }
        else if (choice == 3) {
            int id;
            cout << "Enter patient ID to remove: ";
            cin >> id;
            removePatient(&myHospital, id);
        }
        else if (choice == 4) {
            break;
        }
        else {
            cout << "Invalid choice!\n";
        }
    }

    delete[] myHospital.patients;
    return 0;
}
