#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	string fileName = "demo.txt";

	ofstream outFile (fileName, ios::app /* mode: append */);
	if (outFile.is_open()) {
		outFile << "A new line!\n";
		outFile << "The second line.\n";
		outFile.close();
	} else {
		cout << "Unable open file for writing!" << endl;
	}

	ifstream inFile (fileName);
	if (inFile.is_open()) {
		string line;
		while (getline(inFile, line)) {
			cout << line << endl;
		}
		inFile.close();
	} else {
		cout << "Unable open file for reading!" << endl;
	}

	return 0;
}