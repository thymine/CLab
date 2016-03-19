#include <iostream>

void printArea(double radius = 1);

int main() {
    printArea();
    printArea(3);
    return 0;
}

void printArea(double radius) { // A default argument shall not be redefined by a later declaration
                                // (not even to the same value)
   std::cout << "printArea(" << radius << ")" << std::endl;
}
