//while Loop
//syntax
//while (Condition)
//{
//	//code block	
//}


//Do while loop
//do
//{
//	//code block	
//}
//while(condition);

//For Loop
//for(Variable value; Condition; increment/decrement operator)
//{
//	//Code Block	
//}

#include <iostream>
using namespace std;

int main()
{

	int i = 0;

	//while loop
	while(i < 6) {
		cout << i << "\n";
		i++;
	}

	//do while loop
	do{
		cout << i << "\n";
		i--;
	} while (i > 3);


	//For Loop
	for(int i = 0; i <= 5; i++){
		cout << i << "\n";
	}

	//break
	for(int i=0; i<=10; i++){
		if(i==6) {
			break;
		}
		cout << i << "\n";
	}

	//Continue
	for(int i = 0; i <= 10; i++) {
		if(i == 6){
			continue;
		}
		cout << i << "\n";
	}


	return 0;
}