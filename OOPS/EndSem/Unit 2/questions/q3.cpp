#include <iostream>
using namespace std;

#define PI 22.0 / 7.0

class Radian;

class Degree {
    float degree;

public:
    Degree(float d = 0) : degree(d) {}

    // Conversion to Radian
    operator Radian();

    float getDegree() const {
        return degree;
    }
};

class Radian {
    float radian;

public:
    Radian(float r = 0) : radian(r) {}

    // Conversion to Degree
    operator Degree() {
        return Degree(radian * 180.0 / PI);
    }

    float getRadian() const {
        return radian;
    }
};

// Degree to Radian Conversion
Degree::operator Radian() {
    return Radian(degree * PI / 180.0);
}

int main() {
    Degree d(180);
    Radian r = d; // Degree to Radian conversion
    cout << "180 degrees in radians: " << r.getRadian() << endl;

    Radian r2(PI);
    Degree d2 = r2; // Radian to Degree conversion
    cout << "PI radians in degrees: " << d2.getDegree() << endl;

    return 0;
}
