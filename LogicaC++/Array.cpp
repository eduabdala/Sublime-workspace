#include <iostream>
#include <string>
using namespace std;

int main()
{
	string fruits[3]={"Banana","Manga","Maça"};
	cout << fruits[0] + "\n";

	fruits[0] = "Laranja";

	for(int i = 0; i < 3; i++) {
		cout << fruits[i] + "\n";
	}

	return 0;
}