// Constructor Initializer Lists
#include <iostream>
using namespace std;

class Time {
public:
	Time(int minute, int second) {
		minute_ = minute;
		second_ = second;
	}

	int getMinute() {
		return minute_;
	}

	int getSecond() {
		return second_;
	}

private:
	int minute_;
	int second_;
};

class Action {
public:
	Action(int minute, int second) : time(minute, second) {

	}
	
	Time getTime() {
		return time;
	}

private:
	Time time;
};

int main() {
	Action action = Action(1, 30);
	Time time = action.getTime();
	cout << "Minute(s): " << time.getMinute() << ", Second(s): " << time.getSecond() << endl;
	cout << "It works!" << endl;
	return 0;
}