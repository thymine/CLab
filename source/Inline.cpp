#include <iostream>

using namespace std;

inline void printArea(double radius = 1) { // inline: 内联函数
    cout << "radius(" << radius << ")" << endl;
}

void printArea(double width, double height) {
    cout << "width: " << width << ", height: " << height << endl;
}

int main() {
    printArea();
    printArea(12, 4);
    return 0;
}
