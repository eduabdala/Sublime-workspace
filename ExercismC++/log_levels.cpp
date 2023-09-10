#include <string>
#include <iostream>
using namespace std;

namespace log_line {
	string message() {

		return "[ERROR]: Invalide operation";
	}
}

int main() {

	cout << log_line::message() << "\n";
	return 0;
}