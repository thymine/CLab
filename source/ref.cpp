#include <iostream>

using namespace std;

int main() {
    int count = 1;
    int& refCount = count;

    cout << "count is: " << count << endl;
    cout << "refCount is: " << refCount << endl;

    refCount++;
    cout << "After++: " << endl;
    cout << "count is: " << count << endl;
    cout << "refCount is: " << refCount << endl;

    int clock = 10;
    refCount = clock;

    cout << endl;
    cout << "count is: " << count << endl;
    cout << "refCount is: " << refCount << endl;
    cout << "clock is: " << clock << endl;

    refCount++;
    cout << "After++: " << endl;
    cout << "count is: " << count << endl;
    cout << "refCount is: " << refCount << endl;
    cout << "clock is: " << clock << endl;
    return 0;
}
