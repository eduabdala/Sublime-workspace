#include <iostream>
using namespace std;


int actualMinutesInOven = 30;

int ovenTime() {
	return 40;
}

int remainingOvenTime(int actualMinutesInOven) {
	return ovenTime() - actualMinutesInOven;
}

int main() {

	cout << ovenTime() << endl;
	return 0;
}