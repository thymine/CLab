#include <iostream>

using namespace std;

void printArea(double radius = 1) {
   double area = 3.14 * radius * radius;

   cout << "radius: " << radius << endl;
   cout << "\tarea is " << area << endl;
}

int main() {
    printArea();
    printArea(4);
    return 0;
}
