#include <iostream>
#include <cmath>  // For sqrt() and pow() functions
using namespace std;

// Define the Point class
class Point {
private:
    int x, y;  // Coordinates of the point

public:
    // Constructor to initialize the point
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    // Friend function to calculate the distance between two points
    friend inline double calculateDistance(const Point& p1, const Point& p2);
};

// Inline friend function to calculate the distance between two points
inline double calculateDistance(const Point& p1, const Point& p2) {
    // Calculate the difference in x and y coordinates
    int dx = p2.x - p1.x;
    int dy = p2.y - p1.y;

    // Calculate the distance using the distance formula
    return sqrt(pow(dx, 2) + pow(dy, 2));
}

int main() {
    // Create two Point objects
    Point p1(3, 4);
    Point p2(7, 1);

    // Calculate and display the distance between the two points
    double distance = calculateDistance(p1, p2);
    cout << "The distance between the points is: " << distance << endl;

    return 0;
}
