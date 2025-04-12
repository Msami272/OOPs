#include <iostream>
#include <string>
using namespace std;

// 1. Vehicle structure - stores basic vehicle info
struct Vehicle {
    string id;
    double fuel;
    int inactive_hours; // Simple time tracking
};

// 2. Region structure - holds vehicles in that region
struct Region {
    string name;
    Vehicle vehicles[100]; // Fixed size array (simple)
    int vehicle_count = 0; // Tracks how many vehicles we have
};

// 3. Fleet structure - holds all regions
struct Fleet {
    Region regions[10]; // Fixed size array (simple)
    int region_count = 0; // Tracks how many regions we have
};

// 4. Adds a new region to the fleet
void addRegion(Fleet* fleet, string name) {
    if (fleet->region_count >= 10) {
        cout << "Fleet is full! Cannot add more regions.\n";
        return;
    }
    fleet->regions[fleet->region_count].name = name;
    fleet->region_count++;
    cout << "Added region: " << name << "\n";
}

// 5. Adds a vehicle to a region
void addVehicle(Region* region, string id, double fuel, int hours) {
    if (region->vehicle_count >= 100) {
        cout << "Region is full! Cannot add more vehicles.\n";
        return;
    }
    
    region->vehicles[region->vehicle_count].id = id;
    region->vehicles[region->vehicle_count].fuel = fuel;
    region->vehicles[region->vehicle_count].inactive_hours = hours;
    region->vehicle_count++;
    
    cout << "Added vehicle " << id << " to " << region->name << "\n";
}

// 6. Finds vehicle with lowest fuel in a region
Vehicle* findLowestFuel(Region* region) {
    if (region->vehicle_count == 0) return nullptr;
    
    Vehicle* lowest = &region->vehicles[0];
    for (int i = 1; i < region->vehicle_count; i++) {
        if (region->vehicles[i].fuel < lowest->fuel) {
            lowest = &region->vehicles[i];
        }
    }
    return lowest;
}

// 7. Removes inactive vehicles from a region
void removeInactive(Region* region, int max_hours) {
    int new_count = 0;
    for (int i = 0; i < region->vehicle_count; i++) {
        if (region->vehicles[i].inactive_hours <= max_hours) {
            // Keep this vehicle
            region->vehicles[new_count] = region->vehicles[i];
            new_count++;
        }
    }
    region->vehicle_count = new_count;
}

// 8. Prints all vehicles in the fleet
void printFleet(Fleet* fleet) {
    cout << "\n=== FLEET STATUS ===\n";
    for (int r = 0; r < fleet->region_count; r++) {
        cout << "\nREGION: " << fleet->regions[r].name << "\n";
        for (int v = 0; v < fleet->regions[r].vehicle_count; v++) {
            cout << "Vehicle " << fleet->regions[r].vehicles[v].id 
                 << " - Fuel: " << fleet->regions[r].vehicles[v].fuel << "%"
                 << ", Inactive: " << fleet->regions[r].vehicles[v].inactive_hours << "h\n";
        }
    }
    cout << "==================\n";
}

int main() {
    // Create our fleet
    Fleet myFleet;
    
    // Add regions
    addRegion(&myFleet, "North");
    addRegion(&myFleet, "South");
    addRegion(&myFleet, "East");
    
    // Add vehicles to North
    Region* north = &myFleet.regions[0];
    addVehicle(north, "N-101", 45.5, 2);
    addVehicle(north, "N-102", 30.0, 5);
    addVehicle(north, "N-103", 60.2, 1);
    
    // Add vehicles to South
    Region* south = &myFleet.regions[1];
    addVehicle(south, "S-201", 15.8, 6);
    addVehicle(south, "S-202", 75.3, 0);
    
    // Show fleet status
    printFleet(&myFleet);
    
    // Find lowest fuel in North
    Vehicle* lowFuel = findLowestFuel(north);
    if (lowFuel) {
        cout << "\nLOWEST FUEL IN NORTH: " << lowFuel->id 
             << " (" << lowFuel->fuel << "%)\n";
    }
    
    // Remove inactive vehicles (>4 hours)
    removeInactive(north, 4);
    removeInactive(south, 4);
    
    // Show updated status
    cout << "\nAFTER REMOVING INACTIVE VEHICLES:\n";
    printFleet(&myFleet);
    
    return 0;
}
