#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void startEngine() {
        cout << "Vehicle engine started." << endl;
    }
};

class Airplane : public Vehicle {
public:
    void startEngine() override {
        cout << "Airplane engine started with turbine spin-up." << endl;
    }
};

int main() {
  
    Vehicle vehicle;
    vehicle.startEngine();

    
    Airplane airplane;
    airplane.startEngine();


    Vehicle* vehiclePtr = &airplane;
    vehiclePtr->startEngine();

    return 0;
}
