#include <iostream>
using namespace std;

struct Address {
    string city;
    string zip;
};

struct Company {
    string name;
    double revenue;
    Address addr;
};

int main() {
	//Dynamically allocating memory for array of pointer 
//	Company* c[3];
   
    
    // Allocating memory for each company and initializing
//    c[0] = new Company{"Netsol", 12350000000, {"Islamabad", "04403"}};
//    c[1] = new Company{"Systems Limited", 53440000000, {"Lahore", "05450"}};
//    c[2] = new Company{"10pearls", 82400000000, {"Karachi", "05444"}};

// to delete 
// for(int i=0; i<3; i++){
//delete c[i];
//}


 // Dynamically allocating memory for array
    Company* c=new Company[3];


    c[0] =  {"Netsol", 12350000000, {"Islamabad", "04403"}};
    c[1] =  {"Systems Limited", 53440000000, {"Lahore", "05450"}};
    c[2] =  {"10pearls", 82400000000, {"Karachi", "05444"}};

    // Loop to print the details of each company
    for (int i = 0; i < 3; i++) {
        cout << "Company " << i + 1 << " details: " << endl;
        cout << "Company name: " << c[i].name << endl;
        cout << "Company revenue: " << c[i].revenue << endl;
        cout << "Company address: " << c[i].addr.city << endl;
        cout << "Zip code: " << c[i].addr.zip << endl;
        cout << endl;
    }

    // Free the allocated memory
    for (int i = 0; i < 3; i++) {
        delete[] c; 
    }

    return 0;
}

