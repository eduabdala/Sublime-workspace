//switch(variable) {
//case 1:
// //code block
//break;
//
//case 2:
// //code block
//break;
//
//case 3:
// //code block
//break;
//
//default:
// //code block
//break;


#include <iostream>
using namespace std;

int main()
{
	int day;
	
	while(day > 7){
		cout << "Digite um numero de 1 a 7 \n";
		cin >> day;
	}
	switch(day)
	{
		case 1:
		cout << "Segunda \n";
		break;

		case 2:
		cout << "Terça \n";
		break;

		case 3:
		cout << "Quarta \n";
		break;

		case 4:
		cout << "Quinta \n";
		break;

		case 5:
		cout << "Sexta \n";
		break;

	    case 6:
	    cout << "Sabado \n";

		case 7:
		cout << "Domingo \n";
		break;

	}

	return 0;
}