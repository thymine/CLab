#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string sLength, sWidth;
    float length = 0;
    float width = 0;
    float area = 0;

    cout << "Enter the length of the room: ";
    getline(cin, sLength);
    stringstream(sLength) >> length;

    cout << "Enter width: ";
    getline(cin, sWidth);
    stringstream(sWidth) >> width;

    area = length * width;
    cout << "\nThe area of the room is: " << area << endl;

    return 0;
}
