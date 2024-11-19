#include <iostream>
using namespace std;

class Engine; // Forward declaration

class Car {
    string name;
    static int count ;
public:
    Car(string carName) : name(carName) { count ++; }

    // Declare Engine as a friend class
    friend class Engine;

    static void getCount () {
        cout << "Car Count : " <<count <<endl ;
    }
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

int Car :: count = 0;

int main() {
    Car c1("Chevrolet Camaro");
    Engine e1(500);

    e1.showCarDetails(c1); // Engine class accessing Car's private data
    Car::getCount() ;
    return 0;
}