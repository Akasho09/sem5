#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

// Base class Property (Abstract)
class Property {
protected:
    double latitude, longitude;
    bool sold;
    string name;

public:
    Property(string n, double lat, double lon) : name(n), latitude(lat), longitude(lon), sold(false) {}

    virtual void sell() = 0;     // Pure virtual function
    virtual void print() = 0;    // Pure virtual function

    bool isSold() const { return sold; }
    string getName() const { return name; }
};

// Static Registry class
class GovtRegistry {
public:
    static vector<string> soldProperties;

    static void RegisterSale(string propertyName) {
        soldProperties.push_back(propertyName);
    }

    static void DisplayRegistry() {
        cout << "\nSold Properties:\n";
        for (const auto &property : soldProperties) {
            cout << property << endl;
        }
    }
};

// Static member definition
vector<string> GovtRegistry::soldProperties;

// Derived Class: House
class House : public Property {
public:
    House(string n, double lat, double lon) : Property(n, lat, lon) {}

    void sell() override {
        if (!sold) {
            sold = true;
            GovtRegistry::RegisterSale("House: " + name);
        }
    }

    void print() override {
        cout << "House -> Name: " << name << ", Latitude: " << latitude << ", Longitude: " << longitude
             << ", Sold: " << (sold ? "Yes" : "No") << endl;
    }
};

// Derived Class: Hotel
class Hotel : public Property {
public:
    Hotel(string n, double lat, double lon) : Property(n, lat, lon) {}

    void sell() override {
        if (!sold) {
            sold = true;
            GovtRegistry::RegisterSale("Hotel: " + name);
        }
    }

    void print() override {
        cout << "Hotel -> Name: " << name << ", Latitude: " << latitude << ", Longitude: " << longitude
             << ", Sold: " << (sold ? "Yes" : "No") << endl;
    }
};

// Derived Class: Park
class Park : public Property {
public:
    Park(string n, double lat, double lon) : Property(n, lat, lon) {}

    void sell() override {
        if (!sold) {
            sold = true;
            GovtRegistry::RegisterSale("Park: " + name);
        }
    }

    void print() override {
        cout << "Park -> Name: " << name << ", Latitude: " << latitude << ", Longitude: " << longitude
             << ", Sold: " << (sold ? "Yes" : "No") << endl;
    }
};

// Driver Function
int main() {
    srand(time(0));  // Seed for random number generation

    const int size = 8; // Total properties
    Property* properties[size];

    // Taking user input for 8 properties
    properties[0] = new House("Dream Villa", 12.34, 56.78);
    properties[1] = new Hotel("Luxury Hotel", 22.45, 78.90);
    properties[2] = new Park("Central Park", 32.76, 87.65);
    properties[3] = new House("Green Bungalow", 44.12, 91.23);
    properties[4] = new Hotel("Seaside Resort", 51.43, 19.87);
    properties[5] = new Park("Sunset Park", 61.32, 41.67);
    properties[6] = new House("Hilltop House", 70.45, 33.12);
    properties[7] = new Hotel("Urban Lodge", 80.55, 66.77);

    // Print all properties initially
    cout << "\nAll Properties Initially:\n";
    for (int i = 0; i < size; i++) {
        properties[i]->print();
    }

    // Randomly sell 4 properties
    for (int i = 0; i < 4; i++) {
        int randomIndex = rand() % size;
        properties[randomIndex]->sell();
    }

    // Print all properties after selling
    cout << "\nAll Properties After Sales:\n";
    for (int i = 0; i < size; i++) {
        properties[i]->print();
    }

    // Display Registry of sold properties
    GovtRegistry::DisplayRegistry();

    // Free memory
    for (int i = 0; i < size; i++) {
        delete properties[i];
    }

    return 0;
}
