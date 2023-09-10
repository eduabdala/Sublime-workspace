#include <iostream>
using namespace std;

class Pessoa
{
	public :
		string nome;
		string sobrenome;
		int ano;
		Pessoa(string a, string b, int c);
}; 

Pessoa::Pessoa(string a, string b, int c)
{
	nome = a;
	sobrenome = b;
	ano = c;
}

int main() 
{

	std::string new_release{"apple released a new app!"};
	new_release.find("app");

	new_release.find("e");

	cout << new_release.find("app!") << "\n" << new_release.find("e") << "\n";
	
	std::string qualification{"awesome"};
	// 1st argument: from the index to the end of the string:
	std::string who_is_awesome = qualification.substr(5);

	std::string material{"haunted books"};
	std::string ghost = material.substr(8, 3);

	cout << ghost << "\n" << endl;

	Pessoa PessoaObj1("Eduardo", "Abdala", 20);
	Pessoa PessoaObj2("Felipe", "Nogueira", 30);
  
  cout << PessoaObj1.nome << " " << PessoaObj1.sobrenome << "\n";
  cout << PessoaObj2.nome << " " << PessoaObj2.sobrenome << "\n";
  //cin >> idade;
  //cout << "Digite seu nome\n";
  //cin >> nome;

  //cout << "Ola " << nome << " sua idade é: " << idade << "\n";


  return 0;
}