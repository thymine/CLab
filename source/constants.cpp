#include <iostream>

using namespace std;

int main() {
    const int* p;
    const int x = 1;
    p = &x; // 指针p的类型是 (const int*)
    cout << "x = " << x << endl;
    
    // *p = 2; // Error!
    cout << "x = " << x << endl;


    int y = 3;
    cout << "y = " << y << endl;

    int* const p2 = &y;
    *p2 = 4;
    cout << "y = " << y << endl;

    // p2 = &x; // Error! p2 is a constant

    return 0;
}
