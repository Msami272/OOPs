#include <iostream>
#include <string>
using namespace std;

// 1. Person Class (Base)
class Person {
private:
    string name;
    string address;

public:
    // Constructor
    Person(string n = "", string a = "") {
        name = n;
        address = a;
    }

    // Setters
    void setName(string n) { name = n; }
    void setAddress(string a) { address = a; }

    // Getters
    string getName() { return name; }
    string getAddress() { return address; }
};

// 2. Employee Class (Derived from Person)
class Employee : public Person {
private:
    int empNumber;
    int hoursWorked;

public:
    // Constructor
    Employee(string n = "", string a = "", int num = 0, int hours = 0) 
        : Person(n, a) {
        empNumber = num;
        hoursWorked = hours;
    }

    // Setters
    void setEmpNumber(int num) { empNumber = num; }
    void setHoursWorked(int hours) { hoursWorked = hours; }

    // Getters
    int getEmpNumber() { return empNumber; }
    int getHoursWorked() { return hoursWorked; }
};

// 3. ProductionWorker Class (Derived from Employee)
class ProductionWorker : public Employee {
private:
    int shift; // 1=Day, 2=Night
    double payRate;
    double salary;

public:
    // Constructor
    ProductionWorker(string n = "", string a = "", int num = 0, 
                    int hours = 0, int s = 1, double rate = 0.0)
        : Employee(n, a, num, hours) {
        shift = s;
        payRate = rate;
        salary = 0;
    }

    // Setters
    void setShift(int s) { shift = s; }
    void setPayRate(double rate) { payRate = rate; }

    // Getters
    int getShift() { return shift; }
    double getPayRate() { return payRate; }
    double getSalary() { return salary; }

    // Calculate salary
    void calculateSalary() {
        salary = getHoursWorked() * payRate;
        if (shift == 2 && getHoursWorked() > 5) {
            salary += 1000; // Night bonus
        }
    }

    // Print all details
    void printDetails() {
        cout << "\nEMPLOYEE DETAILS:\n";
        cout << "Name: " << getName() << endl;
        cout << "Address: " << getAddress() << endl;
        cout << "Employee Number: " << getEmpNumber() << endl;
        cout << "Hours Worked: " << getHoursWorked() << endl;
        cout << "Shift: " << (shift == 1 ? "Day" : "Night") << endl;
        cout << "Pay Rate: $" << payRate << "/hour" << endl;
        cout << "Total Salary: $" << salary << endl;
    }
};

int main() {
    // Create workers using constructors
    ProductionWorker worker1("Sami", "rahim yar khan", 101, 8, 1, 200);
    ProductionWorker worker2("ALi", "lahore", 102, 6, 2, 250);

    // Calculate salaries
    worker1.calculateSalary();
    worker2.calculateSalary();

    // Print details
    worker1.printDetails();
    worker2.printDetails();

    return 0;
}
