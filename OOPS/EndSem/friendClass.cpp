#include <iostream>
using namespace std;

class Engine; // Forward declaration

class Car {
    string name;

public:
    Car(string carName) : name(carName) {}

    // Declare Engine as a friend class
    friend class Engine;
};

class Engine {
    int horsepower;

public:
    Engine(int hp) : horsepower(hp) {}

    // Accessing private member of Car
    void showCarDetails(const Car& car) {
        cout << "Car Name: " << car.name << endl;
        cout << "Horsepower: " << horsepower << " HP" << endl;
    }
};

int main() {
    Car c1("Chevrolet Camaro");
    Engine e1(500);

    e1.showCarDetails(c1); // Engine class accessing Car's private data
    return 0;
}