#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Define a class to represent a vehicle
class Vehicle {
private:
    string make;
    string model;
    int year;
    string customerName;

public:
    // Constructor to initialize vehicle properties
    Vehicle(string _make, string _model, int _year, string _customerName) : make(_make), model(_model), year(_year), customerName(_customerName) {}

    // Method to display vehicle information
    void displayInfo() {
        cout << "Make: " << make << ", Model: " << model << ", Year: " << year << ", Customer: " << customerName << endl;
    }

    // Getters for private members
    string getMake() { return make; }
    string getModel() { return model; }
    int getYear() { return year; }
    string getCustomerName() { return customerName; }
};

// Function to add a new vehicle to the system
void addVehicle(vector<Vehicle>& vehicles) {
    string make, model, customerName;
    int year;

    cout << "Enter make: ";
    cin >> make;
    cout << "Enter model: ";
    cin >> model;
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter customer name: ";
    cin >> customerName;

    // Create a new vehicle object and add it to the vector
    vehicles.push_back(Vehicle(make, model, year, customerName));
    cout << "Vehicle added successfully!" << endl;
}

// Function to display all vehicles
void displayVehicles(const vector<Vehicle>& vehicles) {
    if (vehicles.empty()) {
        cout << "No vehicles in the inventory." << endl;
        return;
    }

    cout << "Inventory:" << endl;
    for (auto vehicle : vehicles) {
        vehicle.displayInfo();
    }
}

int main() {
    vector<Vehicle> vehicles;

    int choice;
    do {
        cout << "\n1. Add Vehicle\n2. Display Inventory\n3. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addVehicle(vehicles);
                break;
            case 2:
                displayVehicles(vehicles);
                break;
            case 3:
                cout << "Exiting...";
                break;
            default:
                cout << "Invalid choice!";
        }
    } while (choice != 3);

    return 0;
}
