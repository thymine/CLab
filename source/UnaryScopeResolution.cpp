#include <iostream>

using namespace std;

int v = 1;

int main() {
    int v = 3;

    cout << "local variable v is: " << v << endl;
    cout << "global variable v is: " << ::v << endl;

    return 0;
}
