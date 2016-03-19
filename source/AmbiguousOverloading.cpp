#include <iostream>

using namespace std;

int max(int x, double y) {
    cout << "max(int, double) invoked,\t";
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

double max(double x, int y) {
    cout << "max(double, int) invoked,\t";
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

int main() {
    cout << "max(2, 4.0) = " << max(2, 4.0) << endl; 
    cout << "max(2.0, 4) = " << max(2.0, 4) << endl; 

    cout << "max(2, 3) = " << max(2, 3) << endl; 
    cout << "max(5.0, 4.0) = " << max(5.0, 4.0) << endl; 
    return 0;
}
