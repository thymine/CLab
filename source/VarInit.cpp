#include <iostream>

using namespace std;

int main() {
    int x = 1; // C/C++ style
    int y(2); // C++ OO Style

    int z;
    // z(3); // Error!
    
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    return 0;
}
