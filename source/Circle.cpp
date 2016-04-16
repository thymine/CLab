#include <iostream>

using namespace std;

int main() {
    return 0;
}

class Circle {

public:

    // The radius of this circle
    double radius;

    // Construct a circle object
    Circle() {
        radius = 1;
    }

    // Construct a circle object with new radius
    Circle(double newRadius) {
        radius = newRadius;
    }

    // Return the area of this circle
    double getArea() {
        return radius * radius * 3.14;
    }
};
