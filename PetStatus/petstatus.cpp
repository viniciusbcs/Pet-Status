#include <iostream>
#include <string>
#include "WellCome.h" // Inclui a Classe WellCome.h
using std::string;
using std::getline;
using std::cout;
using std::cin;
using std::endl;
using namespace std;

int main(int argc, char *argv[]) {
	string PropN;
	string nameOfuser;
	WellCome myWellCome; //Cria um objeto WellCome chamado myWellcome
	myWellCome.displayMessange(); //Exibe a mensagem de boas vindas
	
	cout << "\nEntre com o nome do seu Pet: " << endl;
	getline( cin, nameOfuser); // Lê o nome do Pet com expaços em branco
	myWellCome.setUserName(nameOfuser); // configura o nome do Pet
	cout << endl; //gera saída de uma linha em branco
	myWellCome.displayAnimal(); // Exibe a mensagem com o nome do Pet
	
	cout << "\nEntre com o nome do proprietario: " << endl;
	getline( cin, PropN );
	myWellCome.setPro(PropN);
	cout << endl;
	myWellCome.displayNameProprietario();
}