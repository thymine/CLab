#include <iostream>
#include "Circle2.h"

using namespace std;

double totalArea(Circle circleArray[], int size) {
	double totalArea = 0;
	for (int i = 0; i < size; i++) {
		totalArea += circleArray[i].getArea();
	}
	return totalArea;
}

void printCircleArray(Circle circleArray[], int size) {
	cout << "Radius\t\t" << "Area" << endl;

	for (int i = 0; i < size; i++) {
		cout << circleArray[i].getRadius() << "\t\t" << circleArray[i].getArea() << endl;
	}

	cout << "------------------------------" << endl;

	cout << "Total\t\t" << totalArea(circleArray, size) << endl;
}

int main() {
	const int SIZE = 10;

	Circle circleArray[SIZE];

	for (int i = 0; i < SIZE; i++) {
		circleArray[i].setRadius(i + 1);
	}

	printCircleArray(circleArray, SIZE);

	return 0;
}