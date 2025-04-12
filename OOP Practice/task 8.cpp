#include <iostream>
#include <string>
using namespace std;

struct Doctor {
    string name;
    string specialization;
};

struct Hospital {
    string name;
    Doctor doctors[3];  
    int numDoctors;      
};

// Function to input hospital and doctor details
void inputHospitalDetails(Hospital &hospital) {
    cout << "Enter hospital name: ";
    cin >> hospital.name;

    cout << "Enter number of doctors (max 3): ";
    cin >> hospital.numDoctors;
    if (hospital.numDoctors > 3) hospital.numDoctors = 3;

    for (int i = 0; i < hospital.numDoctors; i++) {
        cout << "Enter doctor " << i + 1 << " name: ";
        cin >> hospital.doctors[i].name;
        
        cout << "Enter doctor " << i + 1 << " specialization: ";
        cin >> hospital.doctors[i].specialization;
    }
}

// Function to display hospital and doctor details
void displayHospitalDetails(const Hospital &hospital) {
    cout << "\nHospital Name: " << hospital.name << endl;
    cout << "Number of Doctors: " << hospital.numDoctors << endl;

    for (int i = 0; i < hospital.numDoctors; i++) {
        cout << "Doctor " << i + 1 << " Name: " << hospital.doctors[i].name << endl;
        cout << "Specialization: " << hospital.doctors[i].specialization << endl;
    }
}

int main() {
    int n;

    cout << "Enter the number of hospitals: ";
    cin >> n;

    Hospital hospitals[n];  // Static array of hospitals

    // Input hospital and doctor details
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Hospital " << i + 1 << endl;
        inputHospitalDetails(hospitals[i]);
    }

    // Display hospital and doctor details
    for (int i = 0; i < n; i++) {
        cout << "\nDetails of Hospital " << i + 1 << ": ";
        displayHospitalDetails(hospitals[i]);
    }

    return 0;
}

