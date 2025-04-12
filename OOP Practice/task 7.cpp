#include <iostream>
#include <string>
using namespace std;

struct Car {
    string brand;
    int year;
    float price;
};

// Function to apply discount to the car price
void updatePrice(Car &c, float discount) {
    c.price -= c.price * (discount / 100);  // Reduce price by discount percentage
}

int main() {
    Car car;

    // Taking user input
    cout << "Enter car brand: ";
    cin >> car.brand;

    cout << "Enter car year: ";
    cin >> car.year;

    cout << "Enter car price: ";
    cin >> car.price;

    // Taking discount percentage input
    float discount;
    cout << "Enter discount percentage: ";
    cin >> discount;

    // Update the car price with the discount
    updatePrice(car, discount);

    // Output updated details
    cout << "\nUpdated car details:" << endl;
    cout << "Brand: " << car.brand << endl;
    cout << "Year: " << car.year << endl;
    cout << "Updated Price: " << car.price << endl;

    return 0;
}

