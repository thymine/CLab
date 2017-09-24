#include <iostream>
#include "Circle.h"
using namespace std;

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