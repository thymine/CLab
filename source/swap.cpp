#include <iostream>

using namespace std;

void swapA(int& l, int& r) {
    cout << "Inside swap func" << endl;

    cout << "Before swap: l is " << l << ", r is " << r << endl;

    l = l ^ r;
    r = l ^ r;
    l = l ^ r;

    cout << "After swap: l is " << l << ", r is " << r << endl;
}

void swapB(int& l, int& r) {
    cout << "Inside swap func" << endl;

    cout << "Before swap: l is " << l << ", r is " << r << endl;

    l = l * r;
    r = l / r;
    l = l / r;

    cout << "After swap: l is " << l << ", r is " << r << endl;
}

void swapC(int& l, int& r) {
    cout << "Inside swap func" << endl;

    cout << "Before swap: l is " << l << ", r is " << r << endl;

    l = l + r;
    r = l - r;
    l = l - r;

    cout << "After swap: l is " << l << ", r is " << r << endl;
}

void swapD(int& l, int& r) {
    cout << "Inside swap func" << endl;

    cout << "Before swap: l is " << l << ", r is " << r << endl;

    int temp;
    temp = l;
    l = r;
    r = temp;

    cout << "After swap: l is " << l << ", r is " << r << endl;
}

void swapE(int *l, int *r) {
    cout << "Inside swap func" << endl;

    cout << "Before swap: l is " << *l << ", r is " << *r << endl;

    int temp;
    temp = *l;
    *l = *r;
    *r = temp;

    cout << "After swap: l is " << *l << ", r is " << *r << endl;
}

int main() {
    int l(12), r(23);
    swapA(l, r);
    swapB(l, r);
    swapC(l, r);
    swapD(l, r);
    swapE(&l, &r);
    return 0;
}
