#include <iostream>
using namespace std;

int main()
{
	int age;

	cout << "Digite sua idade \n";
	cin >> age;

	if(age > 18) {
		cout << "Elegible to Vote \n";
	} else {
		cout << "Not Elegible \n";
	}


	if(age < 18) {
		cout << "Too young \n";
	} else if(age > 81) {
		cout << "Too old \n";
	} else {
		cout << "Just right \n";
	}

//Ternary Operator:
//Syntax
// variable = (condition) ? expressionTrue : expressionFalse;

	string result = (age < 18) ? "too young \n" : "Elegible Too Vote \n";
	cout << result;


	return 0;
}