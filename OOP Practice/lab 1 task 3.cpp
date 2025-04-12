#include<iostream>
using namespace std;

// Function to calculate rental cost
double calculateRentalCost(int days, int miles) {
    double baseFee = 25.0;      
    double costPerMile = 0.15;  
    double totalCost = days * baseFee + miles * costPerMile; 

    
    if (days > 30) {
        totalCost = totalCost * 0.80;  
    }

   
    if (days < 15) {
        totalCost = totalCost + (days * 1.99);  
    }

    return totalCost;  
}

int main() {
    int days, miles;

    cout << "Enter the number of days the car is rented: ";
    cin >> days;

    cout << "Enter the number of miles driven: ";
    cin >> miles;

    
    double totalCost = calculateRentalCost(days, miles);

    
    cout << "The total rental cost is: $" << totalCost << endl;

    return 0;
}

