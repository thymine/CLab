#include <iostream>

using namespace std;

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

int main() {
    Circle circle1;
    Circle circle2(5.0);

    cout << "radius: " << circle1.radius << ", area: " << circle1.getArea() << endl;
    cout << "radius: " << circle2.radius << ", area: " << circle2.getArea() << endl;

    circle2.radius = 100.0;
    cout << "radius: " << circle2.radius << ", area: " << circle2.getArea() << endl;

    cout << "radius: " << 5 << ", area: " << Circle(5).getArea() << endl;

    return 0;
}
