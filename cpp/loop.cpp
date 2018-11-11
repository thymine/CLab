#include <iostream>
#include <sstream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main() {
    int target;
    string userInput;
    int guess = -1;

    srand(time(NULL));
    target = rand() % 100 + 1;
    cout << "Hiss, the target is " << target << endl;

    do {
        getline(cin, userInput);
        stringstream(userInput) >> guess;

        if (userInput == "q") {
            cout << "Exit!";
            return 0;
        }

        if (guess < target) {
            cout << "The target is higher" << endl;
        } else if (guess > target) {
            cout << "The target is lower" << endl;
        }

    } while (guess != target);

    cout << "Congratulations!" << endl;

    return 0;
}